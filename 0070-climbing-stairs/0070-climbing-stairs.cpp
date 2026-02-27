#include <iostream>
#include <vector>
using namespace std;
//TOP-DOWN Approch
class Solution {
public:
    int solve(int n,int stair,vector<int>&dp){
        if(stair>n){
            return 0;
        }
        if(stair==n){
            return 1;
        }
        if(dp[stair]!=-1){
            return dp[stair];
        }
        return dp[stair]=solve(n,stair+1,dp) + solve(n,stair+2,dp);
    }
    int climbStairs(int n) {
        int stair=0;
        vector<int>dp(n+1,-1);
        return solve(n,stair,dp);
    }
};