class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res = INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<=0){
                res=max(res,nums[i]);
                sum=0;
                continue;
            }
            res=max(res,sum);
        }
        return res;
    }
};