class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        unordered_map<int,int>mp;
        int res = INT_MIN;
        for(int r = 0;r<fruits.size();r++){
            mp[fruits[r]]++;
            if(mp.size()>2){
                while(mp.size()!=2){
                    if(mp[fruits[i]]==1){
                        mp.erase(fruits[i]);
                    }
                    else{
                        mp[fruits[i]]--;
                    }
                    i++;
                }
            }
            res = max(res,(r-i+1));
        }
        return res;
    }
};