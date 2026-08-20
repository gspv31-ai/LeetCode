class Solution {
public:
void permutation(string original,string ans,vector<string>&v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(left+right,ans+ch,v);
    }
}
    string getPermutation(int n, int k) {
        string str="";
        for(int i=1;i<=n;i++){
            str+=to_string(i);
        }
        vector<string>v;
        permutation(str,"",v);
        return v[k-1];
    }
};