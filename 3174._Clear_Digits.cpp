// https://leetcode.com/problems/clear-digits/description/?envType=daily-question&envId=2025-02-10

class Solution
{
public:
    string clearDigits(string s)
    {
        int i = 0;
        while (i < s.length())
        {
            if ((s[i] >= 'a' && s[i] <= 'z') &&
                (s[i + 1] >= '0' && s[i + 1] <= '9'))
            {
                s.erase(i, 2);
                i = 0;
            }
            else
            {
                i++;
            }
            // cout << s.length() << endl;
        }
        cout << s << endl;
        return s;
    }
};