// https://leetcode.com/problems/partition-equal-subset-sum/description/?envType=daily-question&envId=2025-04-07
// https://www.youtube.com/watch?v=obhWqDfzwQQ&ab_channel=Techdose

class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
            sum += nums[i];

        if (sum & 1) // ODD sum
            return false;

        bool dp[n + 1][sum / 2 + 1];
        // Fill DP table (Subset Sum Problem code)
        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= sum / 2; ++j)
            {
                if (i == 0 || j == 0) // Base Case
                    dp[i][j] = false;
                else if (nums[i - 1] > j) // SkIP case
                    dp[i][j] = dp[i - 1][j];
                else if (nums[i - 1] == j)
                    dp[i][j] = true;
                else
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        return dp[n][sum / 2];
    }
};