// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int countPos = 0;
        int countNeg = 0;
        for (int v : nums)
        {
            if (v != 0 && v < 0)
                countNeg++;
            if (v != 0 && v > 0)
                countPos++;
        }
        return max(countPos, countNeg);
    }
};