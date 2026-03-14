#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<char>c, int n,vector<string>&strings, string &tmp){
        if(tmp.size()==n){
            strings.push_back(tmp);
            return;
        }
        for(int idx=0;idx<c.size();idx++){
            if(tmp.size()>0 && tmp[tmp.size()-1]==c[idx]){
                continue;
            }
            tmp+=c[idx];
            solve(c,n,strings,tmp);
            tmp.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        vector<char>characters = {'a','b','c'};
        vector<string>strings;
        string tmp="";
        solve(characters,n,strings,tmp);
        if(k>strings.size()){
            return "";
        }
        return strings[k-1];
    }
};