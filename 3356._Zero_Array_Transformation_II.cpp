// https://leetcode.com/problems/zero-array-transformation-ii/description/?envType=daily-question&envId=2025-03-13
// https://www.youtube.com/watch?v=Ap8NIgIqM2A&ab_channel=Techdose
// Just Added the solution.
class Solution
{
public:
    int minZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        vector<int> diff(n + 1, 0);
        int sum = 0;
        int pos = 0;
        for (int i = 0; i < n; ++i)
        {
            while (sum + diff[i] < nums[i])
            {
                if (pos == queries.size()) // All Queries done?
                    return -1;

                int start = queries[pos][0];
                int end = queries[pos][1];
                int val = queries[pos][2];
                pos++;

                if (end < i)
                    continue; // Skip past update

                // Range update in O(1)
                diff[max(start, i)] += val;
                diff[end + 1] -= val;
            }
            sum += diff[i];
        }
        return pos;
    }
};