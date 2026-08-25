class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int idx=-1;
        // for(int i=1;i<arr.size()-1;i++){
        //     if(arr[i]>arr[i+1] && arr[i-1]<arr[i]){
        //         idx=i;
        //         break;
        //     }
        // }
        // return idx;

        int lo=1;
        int hi=arr.size()-2;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
            else if(arr[mid]>arr[mid+1]) hi=mid-1;
            else lo=mid+1;
        }
        return 100;
    }
};