https : // leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/?envType=daily-question&envId=2025-02-05

        class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        int sz = s1.length();
        vector<int> v;
        for (int i = 0; i < sz; i++)
        {
            if (s1[i] != s2[i])
                v.push_back(i);
        }
        if (v.size() == 2)
        {
            char temp = s1[v[0]];
            s1[v[0]] = s1[v[1]];
            s1[v[1]] = temp;
        }
        cout << s1 << endl
             << s2;
        if (s1 == s2)
            return true;
        else
            return false;
    }
};