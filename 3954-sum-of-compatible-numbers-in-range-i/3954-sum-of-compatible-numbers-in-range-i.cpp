class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
      int x1 = (n-1);
      int x2 = max((n-k),(n+k));
      int res=0;
      for(int i = 0 ; i<= x2 ; i++){
        int case1 = abs(n-i);
        int case2 = (n&i);
        if(case1<=k && case2==0){
            res+=i;
        }
      }
      return res;
    }
};