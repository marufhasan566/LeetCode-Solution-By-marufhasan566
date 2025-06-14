// https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/description/?envType=daily-question&envId=2025-06-14
// https://www.youtube.com/watch?v=i8UYdogHsCA&ab_channel=codestorywithMIK

class Solution
{
public:
    int minMaxDifference(int num)
    {
        string minNum = to_string(num);
        string maxNum = to_string(num);
        int n = minNum.length();

        char ch = ' ';
        for (int i = 0; i < n; i++)
        {
            if (maxNum[i] != '9')
            {
                ch = maxNum[i];
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (maxNum[i] == ch)
            {
                maxNum[i] = '9';
            }
        }

        ch = minNum[0];
        for (int i = 0; i < n; i++)
        {
            if (minNum[i] == ch)
            {
                minNum[i] = '0';
            }
        }

        return stoi(maxNum) - stoi(minNum);
    }
};