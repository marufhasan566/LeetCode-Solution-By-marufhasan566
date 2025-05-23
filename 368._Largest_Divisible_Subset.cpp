// https://leetcode.com/problems/largest-divisible-subset/description/?envType=daily-question&envId=2025-04-06
// https://www.youtube.com/watch?v=Wv6DlL0Sawg&ab_channel=Techdose

class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> ans;
        if (n == 0)
            return ans;

        sort(nums.begin(), nums.end());
        int max = 1;
        vector<int> dp(n + 1, 1);
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (nums[i] % nums[j] == 0 && 1 + dp[j] > dp[i])
                {
                    dp[i] = 1 + dp[j];
                    if (max < dp[i])
                        max = dp[i];
                }
            }
        }
        // Now push the answer LIS
        int prev = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (dp[i] == max && (prev % nums[i] == 0 || prev == -1))
            {
                ans.push_back(nums[i]);
                max -= 1;
                prev = nums[i];
            }
        }
        return ans;
    }
};