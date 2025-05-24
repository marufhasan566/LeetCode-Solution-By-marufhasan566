// https://leetcode.com/problems/find-words-containing-character/description/?envType=daily-question&envId=2025-05-24

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            for (char c : words[i])
            {
                if (c == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        // check output
        for (int i : ans)
            cout << i << " ";
        return ans;
    }
};