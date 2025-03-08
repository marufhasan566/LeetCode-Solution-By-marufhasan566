// https://leetcode.com/problems/coin-change/description/
// https://www.youtube.com/watch?v=NNcN5X1wsaw&ab_channel=NikhilLohia
// Interview Question. Must Revise

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        if (amount < 1)
            return 0;
        vector<int> minCoinsDP(amount + 1, INT_MAX);
        minCoinsDP[0] = 0;

        for (int i = 1; i <= amount; i++)
        {
            for (int coin : coins)
            {
                if (coin <= i && minCoinsDP[i - coin] != INT_MAX)
                    minCoinsDP[i] =
                        min(minCoinsDP[i], 1 + minCoinsDP[i - coin]);
            }
        }
        if (minCoinsDP[amount] == INT_MAX)
            return -1;
        else
            return minCoinsDP[amount];
    }
};