// https://leetcode.com/problems/maximize-the-number-of-target-nodes-after-connecting-trees-i/description/
// https://www.youtube.com/watch?v=aCylFAah1z4&ab_channel=codestorywithMIK

class Solution
{
public:
    bool isUgly(int n)
    {
        while (n > 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else if (n % 3 == 0)
                n /= 3;
            else if (n % 5 == 0)
                n /= 5;
            else
                return false;
        }
        return n == 1;
    }
};