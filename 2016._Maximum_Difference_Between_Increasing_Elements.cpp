// https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/?envType=daily-question&envId=2025-06-16/
// https://www.youtube.com/watch?v=2WdXwYYDNNg&ab_channel=codestorywithMIK

class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int n = nums.size();
        int minElementi = nums[0];
        int maxDiff = -1;

        for (int j = 1; j < n; j++)
        {
            if (nums[j] > minElementi)
            {
                maxDiff = max(maxDiff, nums[j] - minElementi);
            }
            else
            {
                minElementi = nums[j];
            }
        }

        return maxDiff;
    }
};