class Solution {
public:
    int dp[50];
    int chooseRec(int n, vector<int>& nums){
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int op1=chooseRec(n-2, nums)+nums[n];
        int op2=chooseRec(n-1, nums);
        return dp[n]=max(op1, op2);
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return chooseRec(nums.size()-1, nums);
    }
};