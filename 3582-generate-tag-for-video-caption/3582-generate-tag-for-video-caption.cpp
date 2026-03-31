class Solution {
public:
    string generateTag(string caption) {
        string s ="#";
        bool first=false;
        tolower(caption[0]);
        int n=99;
        int j=0;
        while(caption[j]==' '){
            j++;
        }
        for(int i=j;i<n && i<caption.length();i++){
            if(caption[i]!=' ' && first){
                s+=toupper(caption[i]);
                first=false;
            }
            else if(caption[i]!=' ' && !first){
                s+=tolower(caption[i]);
            }
            else if(caption[i]==' ' && !first){
                n++;
                first=true;
            }
        }
        return s;
    }
};