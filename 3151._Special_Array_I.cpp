// https://leetcode.com/problems/special-array-i/description/?envType=daily-question&envId=2025-02-01

class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        bool flag = true;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i % 2 == 0 && nums[i] % 2 == 0 && nums[i + 1] % 2 == 1)
            {
                continue;
            }
            else if (i % 2 == 1 && nums[i] % 2 == 1 && nums[i + 1] % 2 == 0)
            {
                continue;
            }
            if (i % 2 == 0 && nums[i] % 2 == 1 && nums[i + 1] % 2 == 0)
            {
                continue;
            }
            else if (i % 2 == 1 && nums[i] % 2 == 0 && nums[i + 1] % 2 == 1)
            {
                continue;
            }
            flag = false;
        }
        return flag;
    }
};