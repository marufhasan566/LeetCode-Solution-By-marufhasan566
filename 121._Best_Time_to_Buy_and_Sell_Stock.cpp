// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minPrice = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(minPrice, prices[i]);
            int currentProfit = prices[i] - minPrice;
            maxProfit = max(maxProfit, currentProfit);
        }
        return maxProfit;
    }
};