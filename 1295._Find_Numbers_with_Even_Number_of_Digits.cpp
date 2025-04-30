// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/?envType=daily-question&envId=2025-04-30

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int countEven = 0;
        for (int num : nums)
        {
            int digits = 0;
            while (num)
            {
                digits++;
                num = num / 10;
            }
            if (digits % 2 == 0)
                countEven++;
        }
        cout << countEven << endl;
        return countEven;
    }
};