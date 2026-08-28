class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        int ans=nums[0];
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[0]<=nums[mid]) lo=mid+1;
            else {
                ans=nums[mid];
                hi=mid-1;
            }
        }
        return ans;
    }
};