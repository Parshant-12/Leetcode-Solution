class Solution {
public:
    bool equalFrequency(string word) {
        int hash[26]={0};
        for(int i=0;i<word.length();i++){
            hash[word[i]-'a']++;
        }
        for(int i=0;i<word.length();i++){
            hash[word[i]-'a']--;
            int freq=0;
            bool ans = true;
            for(int i=0;i<26;i++){
                if(hash[i]==0){
                    continue;
                }
                else if(hash[i]!=0 && freq ==0){
                    freq = hash[i];
                }
                else if(hash[i]!=freq){
                    ans = false;
                    break;
                }
            }
            hash[word[i]-'a']++;
            if(ans==true){
                return true;
            }
        }
        return false;
    }
};