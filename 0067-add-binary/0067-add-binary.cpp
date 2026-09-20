class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int carry=0;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0 && j>=0){
            if(a[i]=='1' && b[j]=='1'){
                if(carry){
                    result+='1';
                    carry=1;
                }
                else{
                    result+='0';
                    carry=1;
                }
            }
            else if(a[i]=='0' && b[j]=='0'){
                if(carry){
                    result+='1';
                    carry=0;
                }
                else{
                    result+='0';
                    carry=0;
                }
            }
            else{
                if(carry){
                    result+='0';
                    carry=1;
                }
                else{
                    result+='1';
                    carry=0;
                }
            }
            i--;
            j--;
        }
        while(i>=0){
            if(carry){
                if(a[i] == '1') {
                    result+='0';
                    carry=1;
                } 
                else{
                    result+='1';
                    carry=0;
                }
            }
            else{
                result+=a[i];
            }
            i--;
        }
        while(j>=0){
            if(carry){
                if(b[j] == '1') {
                    result+='0';
                    carry=1;
                } 
                else{
                    result+='1';
                    carry=0;
                }
            }
            else{
                result+=b[j];
            }
            j--;
        }
        if(carry) {
            result += '1';
        }
        reverse(result.begin(),result.end());
        return result;
    }
};