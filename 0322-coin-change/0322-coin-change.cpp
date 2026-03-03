class Solution {
public:
    int solve(vector<int>& coins, int amount,int n, vector<vector<int>>&dp){
        if(amount==0){
            return 0;
        }
        if(n==0){
            return 1e5;
        }
        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        if(coins[n-1]<=amount){
            return dp[n][amount] = min(1+solve(coins,amount-coins[n-1],n,dp) , solve(coins,amount,n-1,dp));
        }
        else{
            return dp[n][amount]=solve(coins,amount,n-1,dp);
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int res = solve(coins,amount,coins.size(),dp);
        if(res>=1e5){
            return -1;
        }
        else{
            return res;
        }
    }
};