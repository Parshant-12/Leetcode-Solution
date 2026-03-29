class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ops=0;
        for(int i=0;i<nums.size();i++){
            ops+= nums[i];
        }
        return ops%k;
    }
};