// https://leetcode.com/problems/sort-array-by-parity/description/?envType=problem-list-v2&envId=sorting

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> result;
        for (int num : nums)
        {
            if (num % 2 == 0)
                result.push_back(num);
        }
        for (int num : nums)
        {
            if (num % 2 == 1)
                result.push_back(num);
        }
        return result;
    }
};