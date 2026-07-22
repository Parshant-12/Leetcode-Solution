class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }

        int minutes=0;
        if(cnt<1){
            return 0;
        }
        int dy[]={0,0,1,-1};
        int dx[]={1,-1,0,0};
        while(!q.empty() && cnt>0){
            int size = q.size();
            for(int i=0;i<size;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int a = x+dx[i];
                    int b = y+dy[i];
                    if(a>=0 && b>=0 && a<grid.size() && b<grid[0].size() && grid[a][b]==1){
                        grid[a][b]=2;
                        q.push({a,b});
                        cnt--;
                    }
                }
            }
            minutes++;
        }
        return cnt==0?minutes:-1;
    }
};