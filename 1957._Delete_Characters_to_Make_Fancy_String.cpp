// https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/?envType=daily-question&envId=2025-07-21
// https://www.youtube.com/watch?v=LEc1tjoXV-A&ab_channel=codestorywithMIK

class Solution
{
public:
    string makeFancyString(string s)
    {
        int n = s.length();

        string result = "";

        result.push_back(s[0]);
        int freq = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == result.back())
            {
                freq++;
                if (freq < 3)
                {
                    result.push_back(s[i]);
                }
            }
            else
            {
                result.push_back(s[i]);
                freq = 1;
            }
        }

        return result;
    }
};