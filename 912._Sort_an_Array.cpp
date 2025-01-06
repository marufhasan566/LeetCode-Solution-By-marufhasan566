// https://leetcode.com/problems/sort-an-array/description/

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int ar[100001] = {0};
        for (int i : nums)
        {
            if (i < 0)
                ar[i + 100001]++;
            else
                ar[i]++;
        }
        nums.clear();
        // check
        // 1st loop to insert negative values into the vector
        for (int i = 50001; i < 100001; i++)
        {
            if (ar[i] != 0)
            {
                while (ar[i]--)
                {
                    int r = i - 100001;
                    cout << r << " ";
                    nums.push_back(r);
                }
            }
        }
        // 2nd loop to insert non-negative values into the vector
        for (int i = 0; i < 50001; i++)
        {
            if (ar[i] != 0)
            {
                while (ar[i]--)
                {
                    cout << i << " ";
                    nums.push_back(i);
                }
            }
        }
        return nums;
    }
};