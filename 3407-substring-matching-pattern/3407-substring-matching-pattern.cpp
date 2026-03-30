class Solution {
public:
    bool hasMatch(string s, string p) {
        int idx = p.find('*');
        string s1 = p.substr(0,idx);
        string s2 = p.substr(idx+1);
        int firstpos = s.find(s1);
        if(firstpos==string::npos){
            return false;
        }
        int secondpos = s.find(s2,firstpos+s1.length());
        if(secondpos == string::npos){
            return false;
        }
        return true;
    }
};