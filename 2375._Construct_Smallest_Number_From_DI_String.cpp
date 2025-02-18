// https: // leetcode.com/problems/construct-smallest-number-from-di-string/description/?envType=daily-question&envId=2025-02-18
// Solution taken from: https://www.youtube.com/watch?v=45n_7EC1N4s&ab_channel=Techdose
// Did I understand properly? No

class Solution
{
public:
    string smallestNumber(string pattern)
    {
        int n = pattern.size();
        stack<int> st;
        string res = "";

        for (int i = 1; i <= n + 1; i++)
        {
            st.push(i);
            char c = pattern[i - 1];

            // If the pattern is increasing then reverse it and save
            if (i == n + 1 || c == 'I')
            {
                while (!st.empty())
                {
                    res.push_back(char('0' + st.top()));
                    st.pop();
                }
            }
        }
        return res;
    }
};