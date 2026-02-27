class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int arr[]={0,0};
        int toggle=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&1){
                toggle = 1-toggle;
            }
            if((i+1)%6==0){
                toggle = 1-toggle;
            }
            arr[toggle]+=nums[i];
        }
        return (arr[0]-arr[1]);
    }
};