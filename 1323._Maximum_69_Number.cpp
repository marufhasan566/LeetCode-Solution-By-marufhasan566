// https://leetcode.com/problems/maximum-69-number/description/?envType=daily-question&envId=2025-08-16
// https://www.youtube.com/watch?v=6dh1H5Hv4TI&ab_channel=codestorywithMIK

class Solution
{
public:
    int maximum69Number(int num)
    {
        int place = 0;
        int index = -1;
        int temp = num;
        while (temp)
        {
            int remain = temp % 10;
            if (remain == 6)
                index = place;

            temp = temp / 10;
            place++;
        }

        if (index == -1)
            return num;

        return num + 3 * pow(10, index);
    }
};
