class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res = prices.size();
        if(prices.size()==1){
            return 1;
        }
        long long cnt=1;
        for(long long right=1;right<prices.size();right++){
            if((prices[right-1]-prices[right])==1){
                cnt++;
            }
            else{
                if(cnt>1){
                    res+= ((cnt*(cnt+1))/2 - cnt);
                    cnt=1;
                }
            }
        }
        if(cnt>1){
           res+= ((cnt*(cnt+1))/2 - cnt);
        }
        return res;
    }
};