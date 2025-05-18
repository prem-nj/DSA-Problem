class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minbuy = INT_MAX;
        for (int i = 0; i < n; i++) {
            minbuy = min(prices[i], minbuy);
            if (prices[i] > minbuy) {
                maxprofit = max(maxprofit, prices[i] - minbuy);
            }
        }
        return maxprofit;
    }
};