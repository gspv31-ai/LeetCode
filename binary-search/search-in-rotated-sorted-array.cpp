class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1,mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            //left sorted hai
            else if(nums[0]<=nums[mid]){
                if(nums[lo]<=target && target<nums[mid])
                    hi=mid-1;
                else lo=mid+1;
            }
            //right side sorted hai to move karo left side
            else{
                if(nums[mid]<target && target<=nums[hi]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return -1;
    }
};