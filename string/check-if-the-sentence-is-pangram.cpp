class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>v(26,0);
        for(int i=0;i<sentence.length();i++){
            int idx=sentence[i]-'a';
            v[idx]=1;
        }
        for(int i=0;i<26;i++){
            if(v[i]==0) return 0;
        }
        return 1;
    }
};