class Solution {
  private:
  void dfs(int node, int visited[],vector<int>& ls,vector<int> adj[]){
      ls.push_back(node);
      visited[node]=1;
      for (auto it: adj[node]){
          if (!visited[it]){
              dfs(it,visited,ls,adj);
          }
      }
      
      
  }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        // Code here
        vector<int> ls;
        int visited[V]={0};
        int start=0;
        dfs(start,visited,ls,adj);
        return ls;
    }
};