// https://leetcode.com/problems/perfect-number/?envType=problem-list-v2&envId=math
// https://www.youtube.com/watch?v=XJTv3mA7rSA&ab_channel=RajKumarMahto

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num <= 1)
            return false;
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        return sum == num;
    }
};