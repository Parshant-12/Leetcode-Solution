class Solution {
public:
    bool check(int start,int end, string s){
        int hyphen=0;
        for(int i=start;i<=end;i++){
            if(isdigit(s[i])){
                return false;
            }
            if((s[i]=='!' || s[i]=='.' || s[i]==',') && i!=end){
                return false;
            }
            if(s[i]=='-'){
                hyphen++;
                if(hyphen>1 || i==start || i==end){
                    return false;
                }
                if(!islower(s[i-1]) || !islower(s[i+1])){
                    return false;
                }
            }
        }
        return true;
    }
    int countValidWords(string sentence) {
        int start=-1;
        int res=0;
        for(int j=0;j<sentence.length();j++){
            if(sentence[j]==' '){
                if(start!=-1 && check(start,j-1,sentence)){
                    res++;
                }
                start=-1;
            }
            else if(start==-1){
                start = j;
            }
        }
        if(start!=-1 && check(start,sentence.length()-1,sentence)){
            res++;
        }
        return res;
    }
};