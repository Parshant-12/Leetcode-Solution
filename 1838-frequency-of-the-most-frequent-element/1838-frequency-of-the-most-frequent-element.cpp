class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mx_freq=1;
        int left=0;
        long long sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while((1LL*nums[right]*(right-left+1))-sum >k){
                sum-=nums[left];
                left++;
            }
            mx_freq=max(mx_freq,(right-left+1));
        }
        return mx_freq;
    }
};