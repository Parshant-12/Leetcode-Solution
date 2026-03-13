#include <iostream>
#include <string>
#include <climits>
using namespace std;
class Solution{
    public:
    int isPalindrome(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return (right-1)-(left+1)+1;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        int start=0,res=0;
        for(int i=0;i<n;i++){
            int odd = isPalindrome(s,i,i);
            int even = isPalindrome(s,i,i+1);
            int mxlen = max(odd,even);
            if(mxlen > res){
                start = i- (mxlen-1)/2;
                res = mxlen;
            }
        }
        return s.substr(start,res);
    }
};