class Solution {
public:
    int solve(vector<int>&prices,int buy, int n,int t,vector<vector<vector<int>>>&dp,int k){
        if(n==prices.size()){
            return 0;
        }
        if(t==k){
            return 0;
        }
        if(dp[buy][t][n]!=-1){
            return dp[buy][t][n];
        }
        if(buy){
             return dp[buy][t][n]=max(solve(prices,0,n+1,t,dp,k)-prices[n],solve(prices,1,n+1,t,dp,k));
        }
        else{
            return dp[buy][t][n]=max(solve(prices,1,n+1,t+1,dp,k)+prices[n],solve(prices,0,n+1,t,dp,k));
        }
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n= prices.size();
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(2,vector<int>(n+1,-1)));
        return solve(prices,1,0,0,dp,k);
    }
};