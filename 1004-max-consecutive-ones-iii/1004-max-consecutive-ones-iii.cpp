class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt=0;
        int left=0;
        int res=0;
        int n = nums.size();
        for(int right=0;right<n;right++){
            
            if(nums[right]){
                cnt++;
            }
            else{
                k--;
                cnt++;
            }
            while(k<0 && left<=right){
                if(nums[left]==0){
                    k++;
                }
                cnt--;
                left++;
            }
            res = max(res,cnt);
        }
        res = max(res,cnt);
        return res;
    }
};