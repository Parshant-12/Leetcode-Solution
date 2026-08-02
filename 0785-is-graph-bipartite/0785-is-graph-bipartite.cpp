class Solution {
public:
    bool dfs(int node, int color, vector<vector<int>>&graph, vector<int>&vis){
        if(vis[node]!=0 && vis[node]!=color) return false;
        if(vis[node]) return true;
        vis[node]=color;
        if(color==1){
            color=2;
        }else{
            color=1;
        }

        for(auto &neighbour: graph[node]){
            if(dfs(neighbour,color,graph,vis)==false){
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>vis(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            if(!vis[i]){
                if(dfs(i,1,graph,vis)==false){
                    return false;
                }
            }
        }
        return true;
    }
};