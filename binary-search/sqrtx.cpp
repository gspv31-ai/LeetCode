class Solution {
public:
    int mySqrt(int x) {
       int start=0;
       int end=x;
       int mid;
       int ans=-1;
       while(start<=end){
        mid=end+(start-end)/2;
        if(mid==x/mid){
            return mid;
            break;
        }
        else if(mid<=x/mid){
            ans=mid;
            start=mid+1;
        }
        else end=mid-1;
       } 
       return ans;
    }
};