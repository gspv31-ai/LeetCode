class Solution {
public:
    void parentheses(string s,vector<string>&v,int open,int close,int n){
        if(close==n){
            v.push_back(s);
            return;
        }
        if(open<n) parentheses(s+'(',v,open+1,close,n);
        if(close<open) parentheses(s+')',v,open,close+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        parentheses("",s,0,0,n);
        return s;
    }
};