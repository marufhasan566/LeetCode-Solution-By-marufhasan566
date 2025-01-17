// https://leetcode.com/problems/neighboring-bitwise-xor/description/?envType=daily-question&envId=2025-01-17

class Solution
{
public:
    bool doesValidArrayExist(vector<int> &derived)
    {
        int result = 0;
        for (int i : derived)
            result ^= i;
        if (result == 0)
            return true;
        else
            return false;
    }
};