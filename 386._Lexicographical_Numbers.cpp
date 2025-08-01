// https://leetcode.com/problems/lexicographical-numbers/description/
// https://www.youtube.com/watch?v=c1gxecf1Kds&t=4s&ab_channel=Techdose

class Solution
{
    void dfs(int curr, int &n, vector<int> &ans)
    {
        if (curr > n)
            return;

        ans.push_back(curr);
        for (int i = 0; i <= 9; ++i) // Not MSD
            dfs(curr * 10 + i, n, ans);
    }

public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> ans;
        for (int i = 1; i <= 9; ++i)
        { // Most significant digit
            dfs(i, n, ans);
        }
        return ans;
    }
};
