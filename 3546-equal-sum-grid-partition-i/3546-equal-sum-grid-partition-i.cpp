class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        long long total = 0;
        for(auto &i:grid){
            for(auto j:i){
                total+=j;
            }
        }
        if(total%2==1){
            return false;
        }
        total/=2;
        long long sum=0;
        for(int i=0;i<rows-1;i++){
            for(int j=0;j<cols;j++){
                sum+=grid[i][j];
            }
            if(sum==total) return true;
        }
        sum=0;
        for(int i=0;i<cols-1;i++){
            for(int j=0;j<rows;j++){
                sum+=grid[j][i];
            }
            if(sum==total) return true;
        }
        return false;
    }
};