class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n=heights.size();      
        // v stores next smallest element index
        vector<int> v(n,n);
        for (int i=n-1;i>=0;i--){
            while (!s.empty() && heights[s.top()]>=heights[i]){
                    s.pop();
                    continue;
                }
            if (!s.empty()){
                    v[i]=s.top();
                    s.push(i);
            }
            else{
                 s.push(i);
            }
        }
        stack<int> st;
        int res=0;
        for (int i=0;i<n;i++){
             while (!st.empty() && heights[st.top()]>=heights[i]){
                    st.pop();
                    continue;
                }
            if (!st.empty()){
                    res=max(heights[i]*(v[i]-st.top()-1),res);
                    st.push(i);
            }
            else{
                res=max(heights[i]*v[i],res);
                st.push(i);
            }
        }
        return res;
        }
        
};
/*Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
 

Constraints:

1 <= heights.length <= 105
0 <= heights[i] <= 104*/