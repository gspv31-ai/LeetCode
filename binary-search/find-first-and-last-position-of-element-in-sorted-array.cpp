class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int first=-1,last=-1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         if(first==-1) first=i;
        //         last=i;
        //     }
        // }
        // return {first,last};
        int start=0,end=nums.size()-1,mid;
        int first=-1,last=-1;
        //first
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first= mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;

            }
            else end=mid-1;
        }
        //last
        start=0,end=nums.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                last= mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;

            }
            else end=mid-1;
        }
        vector<int>v;
        v.push_back(first);
        v.push_back(last);
        return v;

    }
};