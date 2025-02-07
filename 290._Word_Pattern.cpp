// https://leetcode.com/problems/word-pattern/description/?envType=study-plan-v2&envId=top-interview-150
// I used brute-force method and I solved it myself. But this problem needs to be revised definitely

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        vector<string> v;
        stringstream ss(s);
        string word;
        int wordCount = 0;
        while (ss >> word)
        {
            v.push_back(word);
            wordCount++;
        }
        int n = pattern.length();
        if (n != wordCount)
            return false;
        for (int i = 0; i < n; i++)
        {
            if (mp1.count(pattern[i]) || mp2.count(v[i]))
            {
                if (mp1[pattern[i]] != v[i])
                {
                    return false;
                }
                else if (mp2[v[i]] != pattern[i])
                {
                    return false;
                }
                else
                {
                    continue;
                }
            }
            mp1[pattern[i]] = v[i];
            mp2[v[i]] = pattern[i];
        }
        return true;
    }
};