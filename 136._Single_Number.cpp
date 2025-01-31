// https://leetcode.com/problems/single-number/description/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ar[60001] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                ar[60001 + nums[i]]++;
            }
            else
            {
                ar[nums[i]]++;
            }
        }
        // output
        int ans;
        for (int i = 0; i < 60001; i++)
        {
            if (ar[i] == 1)
            {
                if (i > 30000)
                {
                    ans = i - 60001;
                }
                else
                {
                    ans = i;
                }
            }
        }
        return ans;
    }
};