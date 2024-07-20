class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        // here res acts as visited
        vector<vector<int>> res=image;
        res[sr][sc]=color;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while (!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            int drow[4]={-1,0,1,0};
            int dcol[4]={0,1,0,-1};
            q.pop();
            for (int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                // not visited and check for same color as starting
                if (nrow>=0 && nrow<n && ncol<m && ncol>=0 
                && image[nrow][ncol]==image[sr][sc] &&res[nrow][ncol]!=color){
                res[nrow][ncol]=color;
                q.push({nrow,ncol});
            }

            }
            
        }
        return res;
        
    }
};