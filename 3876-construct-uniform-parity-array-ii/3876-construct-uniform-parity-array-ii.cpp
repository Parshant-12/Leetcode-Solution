class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=INT_MAX,even=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]&1){
                odd = min(odd,nums1[i]);
            }
            else{
                even = min(even,nums1[i]);
            }
        }
        if(odd==INT_MAX || even==INT_MAX) return true;
        //for all odd
        bool check = true;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]&1) continue;
            else{
                if((nums1[i]-odd)>=1){
                    continue;
                }
                else{
                    check= false;
                }
            }
        }
        if(!check){
            //for all even
            for(int i=0;i<nums1.size();i++){
                if(nums1[i]%2==0) continue;
                else{
                    if((nums1[i]-odd)>=1){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};