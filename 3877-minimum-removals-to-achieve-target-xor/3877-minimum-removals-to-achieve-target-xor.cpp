class Solution {
public:
    int ans=INT_MAX;
    int solve(vector<int>& nums,int &target, int x,int n,vector<vector<int>>&dp){
        if(n==nums.size()){
            if(x==target){
                return 0;
            }
            else{
                return INT_MIN;
            }
        }
        if(dp[n][x]!=-1){
            return dp[n][x];
        }
        int include = 1+solve (nums,target,x^nums[n],n+1,dp);
        int exclude = solve (nums,target,x,n+1,dp);
        return dp[n][x] = max(include,exclude);
    }
    int minRemovals(vector<int>& nums, int target) {
        int x = 0;
        vector<vector<int>>dp(nums.size()+1,vector<int>(1e5,-1));
        int ans = solve(nums,target,x,0,dp);
        if(ans<0) return -1;
        return nums.size()-ans;
    }
};