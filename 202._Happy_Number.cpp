// https://leetcode.com/problems/happy-number/description/?envType=study-plan-v2&envId=top-interview-150
// This is a medium level problem. Took help from YT: https://www.youtube.com/watch?v=Egw03gI-Tf0&ab_channel=Techdose
// Must Revise this problem

class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> mySet;
        int val;
        int digit;

        while (true)
        {
            val = 0;
            while (n)
            {
                digit = n % 10;
                val += digit * digit;
                n = n / 10;
            }
            if (val == 1)
                return true;
            else if (mySet.find(val) != mySet.end())
                return false;

            mySet.insert(val);
            n = val;
        }
    }
};