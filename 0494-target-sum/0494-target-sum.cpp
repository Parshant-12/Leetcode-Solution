class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if (abs(target) > sum) return 0;
        if ((sum + target) < 0) return 0;
        if((sum+target)%2!=0){
            return 0;
        }
        sum += target;
        sum/=2;
        vector<vector<int>>dp(nums.size()+1,vector<int>(sum+1,0));
        dp[0][0]=1;
        for(int i=1;i<=sum;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=nums.size();i++){
            for(int j=0;j<=sum;j++){
                if(nums[i-1]<=j){
                    dp[i][j] = (dp[i-1][j-nums[i-1]] + dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[nums.size()][sum];
    }
};