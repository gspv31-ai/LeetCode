class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>ans(k);
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans[i]=arr[i];
            }
            return ans;
        }

        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                ans[j]=arr[i];
                i--;
                j--;
            }
            return ans;   
        }
        int lo=0;
        int hi=n-1;
        int mid;
        int t=0;
        bool flag=false;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                ans[t]=arr[mid];
                t++;
                break;
            }
            else if(arr[mid]<x) lo=mid+1;
            else hi=mid-1;
        }
        int lb=hi;
        int ub=lo;
        if(flag==true){
            lb=mid-1;
            ub=mid+1;
        }
        while( t<k && lb>=0 && ub<=n-1){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[ub]);
            if(d1<=d2){
                ans[t]=arr[lb];
                t++;
                lb--;
            }
            else{
                ans[t]=arr[ub];
                t++;
                ub++;
            }
        }
        if(lb<0){
            while(t<k){
                ans[t]=arr[ub];
                t++;
                ub++;
            }
        }
        if(ub>n-1){
            while(t<k){
                ans[t]=arr[lb];
                t++;
                lb--;
            }
        }
        sort(ans.begin(),ans.end());
        
    return ans;
    }
};