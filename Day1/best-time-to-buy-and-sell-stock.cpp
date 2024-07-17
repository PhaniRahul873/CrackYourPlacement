class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cum_max=INT_MIN;
        int n=prices.size();
        int res=INT_MIN;
        for (int i=n-1;i>=0;i--){
            if (i==n-1){
                res=0;
                cum_max=prices[n-1];
            }
            else{
                 cum_max=max(cum_max,prices[i]);
                 res=max(res,cum_max-prices[i]);
            }
        }
        return res;

        
    }
};