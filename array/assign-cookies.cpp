class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l = 0; // cookie
        int r = 0; // child
        while (l<s.size()&&r<g.size()) {
            if (s[l]>=g[r]) {
                r++;  // child is satisfied
            }
            l++;      // move to next cookie
        }

        return r;
    }
};