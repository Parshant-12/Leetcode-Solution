
bool custom(string a,string b){
        string str1= a+b;
        string str2= b+a;
        if(str1>str2){
            return true;
        }
        else{
            return false;
        }
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string>vec;
        for(int i=0;i<n;i++){
            vec.push_back(to_string(nums[i]));
        }
        sort(vec.begin(),vec.end(),custom);
        // for(auto it:vec){
        //     cout<<it<<" ";
        // }
        if (vec[0] == "0") return "0";
        string res="";
        for(int i=0;i<n;i++){
            res+=vec[i];
        }
        return res;
    }
};