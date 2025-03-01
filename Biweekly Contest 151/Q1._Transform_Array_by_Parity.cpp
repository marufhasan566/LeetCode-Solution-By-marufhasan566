https : // leetcode.com/contest/biweekly-contest-151/problems/transform-array-by-parity/?slug=transform-array-by-parity&region=global_v2

        class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[i] = 0;
            }
            else if (nums[i] % 2 == 1)
            {
                nums[i] = 1;
            }
        }
        sort(nums.begin(), nums.end());
        // check
        for (int v : nums)
        {
            cout << v << " ";
        }
        return nums;
    }
};
©leetcode