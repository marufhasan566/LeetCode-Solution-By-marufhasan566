// https://leetcode.com/problems/maximum-ascending-subarray-sum/description/?envType=daily-question&envId=2025-02-04

class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        int maxSum = nums[0];
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                temp += nums[i];
            }
            else
            {
                temp = nums[i];
            }
            maxSum = max(maxSum, temp);
        }
        return maxSum;
    }
};