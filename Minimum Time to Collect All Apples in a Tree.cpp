class Solution {
public:
    int dfs(vector<int> adj[], vector<bool> &hasApple, int node, int parent) {
        int distance = 0;
        for(auto i:adj[node]) {
            if(i!=parent) {
                int temp=dfs(adj, hasApple, i, node);
                if(hasApple[i]) { 
                    distance+=(2+temp);
                    hasApple[node]=true;                
                }
            } 
        }
        return distance;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        //int n=edges.size();
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return dfs(adj,hasApple,0,0);
    }
};
