class Solution {
public:
    int reverseDegree(string s) {
        int x = 26;
        int result=0;
        for(int i=0;i<s.length();i++){
            int val = s[i]-'a';
            // deb(val);
            int product = (x-val)*(i+1);
            // deb(product);
            result+=product;
        }
        return result;
    }
};