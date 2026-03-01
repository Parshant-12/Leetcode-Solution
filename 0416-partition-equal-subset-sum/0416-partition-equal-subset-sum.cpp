class Solution {
public:
    bool solve(vector<int>&nums,int sum,int n,vector<vector<int>>&dp){
        if(sum==0){
            return true;
        }
        if(n==0){
            return false;
        }
        if(dp[n-1][sum]!=-1){
            return dp[n-1][sum];
        }
        if(nums[n-1]<=sum){
            return dp[n-1][sum]= (solve(nums,sum-nums[n-1],n-1,dp) || solve(nums,sum,n-1,dp));
        }
        else{
            return dp[n-1][sum]= solve(nums,sum,n-1,dp);
        }
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        vector<vector<int>>dp(nums.size()+1,vector<int>((sum/2)+1,-1));
        if(sum&1) return false;
        else{
            return solve(nums,sum/2,nums.size(),dp);
        }
    }
};