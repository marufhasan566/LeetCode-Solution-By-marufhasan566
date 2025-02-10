// https://leetcode.com/problems/sort-the-matrix-diagonally/description/
// There is another problem similar to this one. Problem No #3446. ----- Link: https://leetcode.com/problems/sort-matrix-by-diagonals/description/

class Solution
{
    void sortDiagonal(vector<vector<int>> &mat, int row, int col)
    {
        vector<int> diagonal;
        int n = mat.size();
        int m = mat[0].size();
        int i = row;
        int j = col;
        // copying the value of diagonal in vector
        while (i < n && j < m)
        {
            diagonal.push_back(mat[i][j]);
            i++;
            j++;
        }
        // sorting
        sort(diagonal.begin(), diagonal.end());
        // updaing the original matrix diagonal
        i = row;
        j = col;
        for (int value : diagonal)
        {
            cout << value << " ";
            mat[i][j] = value;
            i++;
            j++;
        }
        cout << endl;
    }

public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        // cout << n << "\t" << m << endl;
        for (int i = 0; i < n; i++)
        {
            sortDiagonal(mat, i, 0);
        }
        for (int j = 1; j < m; j++)
        {
            sortDiagonal(mat, 0, j);
        }
        return mat;
    }
};