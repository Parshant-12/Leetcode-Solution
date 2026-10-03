class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int idx = (i+k)%n;
            res[idx]=nums[i];
        }
        nums = res;
    }
};