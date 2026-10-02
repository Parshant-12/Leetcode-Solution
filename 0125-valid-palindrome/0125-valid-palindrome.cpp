class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        string str2=str;
        reverse(str.begin(),str.end());
        if(str==str2){
            return true;
        }
        else{
            return false;
        }
    }
};