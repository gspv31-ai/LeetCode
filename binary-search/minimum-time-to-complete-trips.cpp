class Solution {
public:
bool check(long long mid,vector<int>& time, int totalTrips){
    int n=time.size();
    long long trip=0;
    //1 2 3 hours=2
    for(int i=0;i<n;i++){
        trip+=mid/time[i];
    }
    if(totalTrips>trip) return false;
    else return true;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(time[i],mx);
        }
        long long lo=-1;
        long long hi=(long long)mx * (long long)totalTrips;
        long long ans;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,totalTrips)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
        
    }
};