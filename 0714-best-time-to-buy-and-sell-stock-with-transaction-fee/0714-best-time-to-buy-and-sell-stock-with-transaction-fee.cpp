class Solution {
public:
    int solve(vector<int>&prices,int buy, int n,vector<vector<int>>&dp,int fee){
        if(n==prices.size()){
            return 0;
        }
        if(dp[buy][n]!=-1){
            return dp[buy][n];
        }
        if(buy){
             return dp[buy][n]=max(solve(prices,0,n+1,dp,fee)-prices[n],solve(prices,1,n+1,dp,fee));
        }
        else{
            return dp[buy][n]=max(solve(prices,1,n+1,dp,fee)+prices[n]-fee,solve(prices,0,n+1,dp,fee));
        }
    }
    
    int maxProfit(vector<int>& prices,int fee) {
        int n= prices.size();
        vector<vector<int>>dp(2,vector<int>(n+2,-1));
        return solve(prices,1,0,dp,fee);
    }
};