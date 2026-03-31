class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        if(n> flowerbed.size()+1/2){
            return false;
        }
        if(flowerbed.size()==1 && flowerbed[0]==0){
            return true;
        }
        else if(flowerbed.size()==1 && flowerbed[0]==1){
            return false;
        }
        for(int i=0;i<flowerbed.size();i++){
            if(i==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }
            else if(i==flowerbed.size()-1 && flowerbed[i-1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }
            else if(i>0 && i<flowerbed.size()-2){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        if(n<=0){
            return true;
        }
        return false;
    }
};