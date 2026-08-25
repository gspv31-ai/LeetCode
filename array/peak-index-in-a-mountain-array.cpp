class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int idx=-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1] && arr[i-1]<arr[i]){
                idx=i;
                break;
            }
        }
        return idx;
    }
};