// https://leetcode.com/problems/reverse-string/description/

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int l = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < l)
            {
                char temp = s[i];
                s[i] = s[l];
                s[l] = temp;
                l--;
            }
        }
    }
};