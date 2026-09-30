class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,maxs=nums[0];
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            maxs=max(cs,maxs);
            if(cs<0) cs=0;
        }
        return maxs;
        
    }
};