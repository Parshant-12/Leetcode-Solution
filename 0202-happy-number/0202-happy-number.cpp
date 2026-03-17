class Solution {
public:
    bool isHappy(int n) {
        if(n==0 || n==1){
            return true;
        }
        set<int>st;
        st.insert(n);
        int sum=n,x,digit;
        do{
            x = sum;
            sum = 0;
            int size = st.size();
            while(x>0){
                digit = x%10;
                sum+=(digit*digit);
                x/=10;
            }
            st.insert(sum);
            if(st.size()==size){
                return false;
            }
        }while(sum!=1);
        return true;
    }
};