class Solution {
public:

    void solve(int n, int k, vector<string>&ans, string s,int i,int cost){
        if(i==n){
            ans.push_back(s);
            return;
        }
        s.push_back('0');
        solve(n,k,ans,s,i+1,cost);
        s.pop_back();

        if((s.empty() || s.back()!='1') && (cost+i<=k)){
            s.push_back('1');
            solve(n,k,ans,s,i+1,cost+i);
            s.pop_back();
        }
    }

    vector<string> generateValidStrings(int n, int k) {
        vector<string>ans;
        string s = "";
        solve(n,k,ans,s,0,0);
        return ans;
    }
};