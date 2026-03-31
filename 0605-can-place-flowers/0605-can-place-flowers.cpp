class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int cnt=0;
        for(int i=0;i<size;i++){
            if(cnt>=n){
                return true;
            }
            if(flowerbed[i]==0){
                int left = (i==0) || flowerbed[i-1]==0;
                int right = (i==size-1) || flowerbed[i+1]==0;
                if(left && right){
                    flowerbed[i]=1;
                    cnt++;
                }
            }
        }
        return cnt>=n;
    }
};