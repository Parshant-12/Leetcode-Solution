class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int res=0;
        for(auto it:st){
            int x = it;
            if(st.find(x-1)==st.end()){
                int len=0;
                while(st.find(x)!=st.end()){
                    len++;
                    x++;
                }
                res = max(res,len);
            }
        }
        return res;
    }
};