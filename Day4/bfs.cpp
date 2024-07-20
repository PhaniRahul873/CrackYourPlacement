class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        vector<bool> visited(V,false);
        visited[0]=true;
        while (!q.empty()){
            int node=q.front();
            bfs.push_back(node);
            q.pop();
            
            for (int i=0;i<adj[node].size();i++){
                if (!visited[adj[node][i]]){
                    visited[adj[node][i]]=true;
                    q.push(adj[node][i]);
                }
            }
        }
        return bfs;
    }
};