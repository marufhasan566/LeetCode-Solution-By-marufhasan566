// https://leetcode.com/problems/power-of-two/description/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n > 0)
        {
            double ans = log2(n);
            int ans2 = log2(n);
            double diff = ans - ans2;
            if (diff == 0)
                return true;
            else
                return false;
        }
        else
            return false;
    }
};