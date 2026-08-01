class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        queue<pair<int,int>>q;
        int cnt=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    q.push({i,j});
                    while(!q.empty()){
                        int a = q.front().first;
                        int b = q.front().second;
                        q.pop();
                        grid[a][b]='0';
                        for(int k=0;k<4;k++){
                            int x= a+dx[k];
                            int y= b+dy[k];
                            if(x>=0 && y>=0 && x<rows && y<cols && grid[x][y]=='1'){
                                q.push({x,y});
                                grid[x][y]='0';
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};