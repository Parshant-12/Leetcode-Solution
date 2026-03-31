class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
        int ans =0;
        for(auto [i,j]:mp){
            ans = gcd(ans,j);
        }
        return ans>=2;
    }
};