class Solution {
public:
    int getLength(vector<int>& nums) {
        int len = 0, n = nums.size();
        map<int,int> a, b;

        for(int i = 0; i < n; i++){
            a.clear(); b.clear();
            for(int j = i; j < n; j++){
                if(a.find(nums[j]) != a.end()){
                    b[a[nums[j]]]--;
                    if(b[a[nums[j]]] == 0){
                        b.erase(a[nums[j]]);
                    }
                }
                
                a[nums[j]]++;
                b[a[nums[j]]]++;
                if((b.size() == 2 && b.begin()->first * 2 == b.rbegin()->first) || (b.size() == 1 && a.size() == 1)){
                    len = max(len, j - i + 1);
                }
            }
        }
        return len;
    }
};