class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=INT_MIN;
        int prod1=1;
        int prod2=1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                res=max(res,0);
                prod1=1;
                continue;
            }
            prod1*=nums[i];
            res = max(res,prod1);
        }
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]==0){
                res=max(res,0);
                prod2=1;
                continue;
            }
            prod2*=nums[i];
            res = max(res,prod2);
        }
        return res;
    }
};