// https://leetcode.com/problems/number-of-1-bits/description/?envType=study-plan-v2&envId=top-interview-150

class Solution
{
public:
    int hammingWeight(int n)
    {
        vector<int> ans;
        while (n != 0)
        {
            int r = n % 2;
            n = n / 2;
            ans.push_back(r);
        }
        int setBits = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
            if (ans[i] == 1)
                setBits++;
        }
        return setBits;
    }
};