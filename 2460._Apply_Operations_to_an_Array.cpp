// https://leetcode.com/problems/apply-operations-to-an-array/description/?envType=daily-question&envId=2025-03-01

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                int v = nums[i] * 2;
                nums[i] = v;
                nums[i + 1] = 0;
            }
        }
        // check
        int totalZeros = 0;
        for (int v : nums)
        {
            // cout << v << " ";
            if (v == 0)
            {
                totalZeros++;
            }
            else
            {
                ans.push_back(v);
            }
        }
        while (totalZeros--)
        {
            ans.push_back(0);
        }
        return ans;
    }
};