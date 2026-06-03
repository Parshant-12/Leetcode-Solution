class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        while(n>0){
            int digit = n%10;
            n/=10;
            sum+=digit;
        }
        return sum;
    }
};