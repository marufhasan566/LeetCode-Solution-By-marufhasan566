// https://leetcode.com/problems/powx-n/description/?envType=study-plan-v2&envId=top-interview-150
// https://www.youtube.com/watch?v=7wcJXZoGKMI&ab_channel=codestorywithMIK

class Solution
{
public:
    double solve(double x, long n)
    {

        if (n == 0)
            return 1;

        if (n < 0)
            return 1 / solve(x, -n);

        if (n % 2 == 0)
        {
            return solve(x * x, n / 2);
        }

        return x * solve(x * x, (n - 1) / 2);
    }

    double myPow(double x, int n) { return solve(x, (long)n); }
};