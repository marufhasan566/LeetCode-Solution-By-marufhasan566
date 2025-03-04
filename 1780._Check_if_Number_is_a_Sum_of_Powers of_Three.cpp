// https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/?envType=daily-question&envId=2025-03-04
// Help from YT: https://www.youtube.com/watch?v=Jjk3LP4r5zE&ab_channel=Techdose

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        while (n)
        {
            if (n % 3 == 2)
                return false;
            n = n / 3;
        }
        return true;
    }
};