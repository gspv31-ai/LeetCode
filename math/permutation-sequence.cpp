class Solution {
public:
void permutaion(string str,string curr,vector<string>&ans,int k){
    if(str==""){
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutaion(left+right,curr+ch,ans,k);
    }
}
    string getPermutation(int n, int k) {
        string str="";
        for(int i=1;i<=n;i++){
            str+=to_string(i);
        }
        vector<string>ans;
        permutaion(str,"",ans,k);
        return ans[k-1];
    }
};