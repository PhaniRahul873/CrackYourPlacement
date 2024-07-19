class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int rows=matrix.size();
       int cols=matrix[0].size();
       int row=0;
       int col=-1;
       int dir=1;// left to right, top to bottom
       vector<int> res;
       while (rows>0 && cols>0){
          for (int i=0;i<cols;i++){
            col+=dir;
            res.push_back(matrix[row][col]);
          }
          rows--;
          for (int p=0;p<rows;p++){
            row+=dir;
            res.push_back(matrix[row][col]);
          }
          cols--;
          dir*=-1;

       }
        
    return res;
    }
};
/*Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100*/