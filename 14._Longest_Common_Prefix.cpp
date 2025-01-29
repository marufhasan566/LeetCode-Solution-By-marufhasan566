// https://leetcode.com/problems/longest-common-prefix/description/
// Help from : https://www.youtube.com/watch?v=RJLLw4WsUzg&ab_channel=AbhishekSensei

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res;
        for (int i = 0; i < strs[0].size(); i++)
        {
            for (string s : strs)
            {
                if (s[i] != strs[0][i])
                {
                    return res;
                }
            }
            res = res + strs[0][i];
        }
        return res;
    }
};