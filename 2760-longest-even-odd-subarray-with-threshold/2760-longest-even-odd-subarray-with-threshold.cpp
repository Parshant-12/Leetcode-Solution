class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
                int currlen = 1;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]<=threshold && nums[j]%2!=nums[j-1]%2){
                        currlen++;
                    }
                    else{
                        break;
                    }
                }
                ans = max(ans,currlen);
            }
        }
        return ans;
    }
};