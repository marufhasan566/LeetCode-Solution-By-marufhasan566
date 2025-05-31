// https://leetcode.com/problems/base-7/description/?envType=problem-list-v2&envId=math

class Solution
{
public:
    string convertToBase7(int num)
    {
        if (num == 0)
            return "0";
        bool isNeg = num < 0 ? true : false;
        num = abs(num);
        string output = "";
        while (num > 0)
        {
            int r = num % 7;
            output += to_string(r);
            num /= 7;
        }
        reverse(output.begin(), output.end());
        if (isNeg)
        {
            output = "-" + output;
        }
        return output;
    }
};