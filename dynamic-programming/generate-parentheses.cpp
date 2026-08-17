class Solution {
public:
void Generate(vector<string>&ans, string s,int open,int close,int n){
    if(close==n){
        ans.push_back(s);
        return;
    }
    if(open<n) Generate(ans,s+'(',open+1,close,n);
    if(close<open) Generate(ans,s+')',open,close+1,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        Generate(ans,"",0,0,n);
        return ans;
    }
};