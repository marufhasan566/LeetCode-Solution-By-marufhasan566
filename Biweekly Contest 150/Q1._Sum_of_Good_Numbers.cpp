// https://leetcode.com/contest/biweekly-contest-150/problems/sum-of-good-numbers/description/

class Solution
{
public:
    int sumOfGoodNumbers(vector<int> &nums, int k)
    {
        int sum = 0;
        int sz = nums.size();

        for (int i = 0; i < sz; i++)
        {
            bool isGood = true;

            if (i - k >= 0 && nums[i] <= nums[i - k])
            {
                isGood = false;
            }

            if (i + k < sz && nums[i] <= nums[i + k])
            {
                isGood = false;
            }

            if (isGood)
            {
                sum += nums[i];
            }
        }

        return sum;
    }
};
