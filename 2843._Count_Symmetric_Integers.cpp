// https://leetcode.com/problems/count-symmetric-integers/description/?envType=daily-question&envId=2025-04-11

class Solution
{
    bool checkSymmetric(string no)
    {
        int size = no.size();
        if (size & 1)
            return false;

        int left_sum = 0;
        int right_sum = 0;
        for (int i = 0; i < (size + 1) / 2; ++i)
        {
            left_sum += no[i];
            right_sum += no[size - i - 1];
        }
        return left_sum == right_sum;
    }

public:
    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;
        for (int no = low; no <= high; ++no)
        {
            if (checkSymmetric(to_string(no)))
                count++;
        }
        return count;
    }
};