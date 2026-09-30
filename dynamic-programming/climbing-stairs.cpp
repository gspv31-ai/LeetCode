class Solution {
public:
    int climbStairs(int n) {
        // if(n==1) return 1; 
        // else if(n==2) return 2;
        // return climbStairs(n-1)+climbStairs(n-2);
        int a=1;
        int b=2;
        int total=0;
        if(n==1) return 1;
        for(int i=3;i<=n;i++){
            total=a+b;
            a=b;
            b=total;
        }
        return b;
    }
};