class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int>mp;
        int res=0;
        for(int i=0;i<password.size();i++){
            mp[password[i]]++;
            char c = password[i];
            int cnt = mp[password[i]];
            if(mp[password[i]]==1 && c>='a' && c<='z'){
                res+=1;
            }
            else if(mp[password[i]]==1 && c>='A' && c<='Z'){
                res+=2;
            }
            else if(mp[password[i]]==1 && c>='0' && c<='9'){
                res+=3;
            }
            else if(mp[password[i]]==1 && (c=='!' || c=='@' || c=='#' || c=='$')){
                res+=5;
            }
        }
       
        return res;
    }
};