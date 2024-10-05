class Solution {
public:
    int dp[50];
    int recClimb(int n){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=recClimb(n-1)+recClimb(n-2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return recClimb(n);
    }
};