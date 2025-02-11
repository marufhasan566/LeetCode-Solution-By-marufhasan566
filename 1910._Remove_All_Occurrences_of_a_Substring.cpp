// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/?envType=daily-question&envId=2025-02-11

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int i = 0;
        int l = part.length();
        while (i < s.length())
        {
            int count = 0;
            for (int j = 0; j < l; j++)
            {
                if ((i + j < s.length() && (s[i + j] == part[j])))
                    count++;
            }
            if (count == l)
            {
                s.erase(i, l);
                i = 0;
                continue;
            }
            i++;
        }
        cout << s << endl;
        return s;
    }
};