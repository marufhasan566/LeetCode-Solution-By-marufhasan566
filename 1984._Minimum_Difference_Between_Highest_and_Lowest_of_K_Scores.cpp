// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/

class Solution
{
public:
    int minimumDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + k - 1;
            if (j < nums.size())
            {
                int d = nums[j] - nums[i];
                diff = min(diff, d);
            }
        }
        return diff;
    }
};