// https://leetcode.com/problems/number-of-zero-filled-subarrays/description/?envType=daily-question&envId=2025-08-19
// https://github.com/MAZHARMIK/Interview_DS_Algo/blob/master/Arrays/Number%20of%20Zero-Filled%20Subarrays.cpp

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long result = 0;

        int n = nums.size();

        int countSubArray = 0;

        for (int i = 0; i < n; i++)
        {

            if (nums[i] == 0)
                countSubArray += 1;
            else
                countSubArray = 0;

            result += countSubArray;
        }

        return result;
    }
};