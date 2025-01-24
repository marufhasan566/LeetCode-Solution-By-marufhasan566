// http://leetcode.com/problems/zigzag-grid-traversal-with-skip/description/

class Solution
{
public:
    vector<int> zigzagTraversal(vector<vector<int>> &grid)
    {
        vector<int> v;
        for (int i = 0; i < grid.size(); i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < grid[i].size(); j++)
                {
                    cout << grid[i][j] << " ";
                    v.push_back(grid[i][j]);
                }
                cout << endl;
            }
            else
            {
                for (int j = grid[i].size() - 1; j >= 0; j--)
                {
                    cout << grid[i][j] << " ";
                    v.push_back(grid[i][j]);
                }
                cout << endl;
            }
        }
        vector<int> result;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
                result.push_back(v[i]);
        }
        return result;
    }
};