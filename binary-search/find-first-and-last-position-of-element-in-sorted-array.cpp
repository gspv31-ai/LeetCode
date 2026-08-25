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
        

        //first
        int low=0,high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=low + (high - low) / 2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        //last
        low=0,high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=low + (high - low) / 2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        vector<int>v(2);
        v[0]=first;
        v[1]=last;
        return v;

    }
};