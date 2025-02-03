// https://leetcode.com/problems/climbing-stairs/description/?envType=study-plan-v2&envId=top-interview-150
// Help from youtube:  https://youtu.be/UUaMrNOvSqg

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return 1;
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        // check output
        for (int i = 1; i <= n; i++)
        {
            cout << "Stairs " << i << ": " << dp[i] << endl;
        }
        return dp[n];
    }
};