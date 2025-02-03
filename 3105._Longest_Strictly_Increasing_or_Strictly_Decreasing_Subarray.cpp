// https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/?envType=daily-question&envId=2025-02-03
// Help from YT: https://www.youtube.com/watch?v=FZsqp5asbKs&ab_channel=Techdose

class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int longestSub = 1;
        int increasing = 1;
        int decreasing = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
                increasing++;
            else
                increasing = 1;
            if (nums[i] < nums[i - 1])
                decreasing++;
            else
                decreasing = 1;
            longestSub = max(longestSub, max(increasing, decreasing));
        }
        return longestSub;
    }
};