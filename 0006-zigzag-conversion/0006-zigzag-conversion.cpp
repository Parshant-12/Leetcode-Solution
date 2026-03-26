class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if(numRows==1){
            return s;
        }
        string res = "";
        int jump = 2*numRows-2;
        for(int i=0;i<numRows;i++){
            for(int j = i ; j<n ;j+=jump){
                if(i==0 || i==numRows-1){
                    res+=s[j];
                    continue;
                }
                res+=s[j];
                int jump2 = (j+jump)-(2*i);
                if(jump2<n){
                    res+=s[jump2];
                }
            }
        }
        return res;
    }
};