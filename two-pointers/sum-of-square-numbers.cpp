class Solution {
public:
    bool IsPerfactSquare(int c){
        int root=sqrt(c);
        if(root*root==c) return true;
        else return false;
    }
    bool judgeSquareSum(int c) {
        int a=0;
        int b=c;
        while(a<=c){
            if(IsPerfactSquare(a) && IsPerfactSquare(b)){
            return true;
            a++;
            b--;
            }
        }   
    return false;
    }
};