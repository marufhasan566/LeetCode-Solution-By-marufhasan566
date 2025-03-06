// https://leetcode.com/problems/find-missing-and-repeated-values/description/?envType=daily-question&envId=2025-03-06

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid[0].size() * grid.size();
        vector<int> count(n + 1);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                count[grid[i][j]]++;
            }
        }
        vector<int> result;
        for (int i = 1; i < n + 1; i++)
        {
            // cout << i << ": \t" << count[i] << endl;
            if (count[i] == 2)
                result.push_back(i);
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (count[i] == 0)
                result.push_back(i);
        }
        return result;
    }
};