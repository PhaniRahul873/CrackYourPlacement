class Solution {
 private:
  bool bfs(int src,vector<bool>& visited,vector<int> adj[]){
      queue<pair<int,int>> q;
      visited[src]=true;
      q.push({src,-1});
      while (!q.empty()){
          int node=q.front().first;
          int parent=q.front().second;
          q.pop();
          // it is adj node
          for (auto it:adj[node]){
              if (!visited[it]){
                  visited[it]=true;
                  q.push({it,node});
              }
              else{
                  if (parent!=it){
                      return true;
                  }
              }
          }
      }
  }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,false);
        for (int i=0;i<V;i++){
            if (!visited[i]){
                if (bfs(i,visited,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};