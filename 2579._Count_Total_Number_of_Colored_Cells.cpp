// https://leetcode.com/problems/count-total-number-of-colored-cells/description/
// Help from YT: https://www.youtube.com/watch?v=Zlktm2sgxK0&ab_channel=Techdose

class Solution
{
public:
    long long coloredCells(int n)
    {
        long long int result = 1 + 4 * ((long long)n * (n - 1) / 2);
        return result;
    }
};