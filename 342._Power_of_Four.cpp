// https://leetcode.com/problems/power-of-four/description/?envType=problem-list-v2&envId=math
// https://leetcode.com/problems/power-of-four/?envType=problem-list-v2&envId=math

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 0)
        {
            return false;
        }
        while (n % 4 == 0)
        {
            n /= 4;
        }
        return n == 1;
    }
};