// https://leetcode.com/problems/find-the-difference/description/

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int s1 = 0, s2 = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (i < t.size() - 1)
                s2 += s[i];
            s1 += t[i];
        }
        int diff = s1 - s2;
        char c = diff;
        return c;
    }
};