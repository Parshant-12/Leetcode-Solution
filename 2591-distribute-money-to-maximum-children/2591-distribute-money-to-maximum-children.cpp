class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children){
            return -1;
        }
        int ans = 0;
        money-=children;
        if(money>(children*7)){
            return children-1;
        }
        else if(money==(children*7)){
            return children;
        }
        else if(money==0){
            return 0;
        }
        else{
            ans = money/7;
            money-=(ans*7);
            if(money==3 && ans==children-1){
                return children-2;
            }
            else{
                return ans;
            }
        }
    }
};