class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<int>v(n+1);
        v[0]=1;
        long long int k=1;
        for(int i=1;i<=n;i++){
            k=k*(n-i+1)/i;
            v[i]=k;
        }
        return v;
    }
};
