class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int ops=0;
        if(s.length()!=goal.length()) return false;
        unordered_map<char,int>mp;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i]){
                ops++;
            }
            mp[s[i]]++;
            if(mp[s[i]]>1){
                flag=true;
            }
        }
        if(ops==2){
            string s1 = s;
            string s2 = goal;
            sort(s1.begin(),s1.end()); 
            sort(s2.begin(),s2.end()); 
            if(s1==s2){
                return true;
            }
            return false;
        }
        else if(ops==0 && flag){
            return true;
        }
        else{
            return false;
        }
    }
};