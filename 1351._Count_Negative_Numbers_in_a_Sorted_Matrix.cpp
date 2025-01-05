// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

class Solution
{
public:
    int countNegatives(vector<vector<int>> &v)
    {
        int negative = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << " ";
                if (v[i][j] < 0)
                    negative++;
            }
            cout << endl;
        }
        cout << negative << endl;
        return negative;
    }
};