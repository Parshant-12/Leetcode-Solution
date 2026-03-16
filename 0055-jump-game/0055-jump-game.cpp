class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1) return true;
        int mx = 0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if((i+nums[i]) >= n-1){
                return true;
            }
            else if(nums[i]==0 && mx==i){
                return false;
            }
            else if(nums[i]==0 && mx>i){
                continue;
            }
            else{
                mx = max(mx,i+nums[i]);
            }
        }
        return false;
    }
};