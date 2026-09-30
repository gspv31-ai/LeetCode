class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch flag algorithm
        int mid=0;
        int low=0;
        int high=nums.size()-1;
        // 1) mid ke baare me socho
        // 2)0 to low-1 -> high+1 to end -> 2
        //low to mid-1->1
        while(mid<=high){
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else mid++;
        }
        
    }
};