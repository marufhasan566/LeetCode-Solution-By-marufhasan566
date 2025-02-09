// https://leetcode.com/problems/sort-matrix-by-diagonals/description/

class Solution
{
    void sortDiagonal(vector<vector<int>> &grid, int row, int col,
                      bool ascending)
    {
        int n = grid.size();
        vector<int> diagonal;

        int i = row, j = col;
        while (i < n && j < n)
        {
            diagonal.push_back(grid[i][j]);
            i++;
            j++;
        }

        if (ascending)
            sort(diagonal.begin(), diagonal.end());
        else
            sort(diagonal.begin(), diagonal.end(), greater<>());

        i = row, j = col;
        for (int value : diagonal)
        {
            grid[i][j] = value;
            cout << grid[i][j] << " ";
            i++;
            j++;
        }
        cout << endl;
    }

public:
    vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            sortDiagonal(grid, i, 0, false);
        }
        for (int j = 1; j < n; j++)
        {
            sortDiagonal(grid, 0, j, true);
        }
        return grid;
    }
};