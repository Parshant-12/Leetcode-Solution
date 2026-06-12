class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int digit1,digit2;
        for(int i=0;i<s.size()-1;i++){
            digit1 = s[i]-'0';
            digit2= s[i+1]-'0';
            if(abs(digit1-digit2)>2){
                return false;
            }
        }
        return true;
    }
};