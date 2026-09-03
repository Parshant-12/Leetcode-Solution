class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        if(st.size()==nums.size()){
            return false;
        }
        return true;
    }
};