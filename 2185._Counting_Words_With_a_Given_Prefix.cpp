// https://leetcode.com/problems/counting-words-with-a-given-prefix/description/

class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int count = 0;
        int preSize = pref.size();
        cout << preSize << endl;
        cout << endl;
        for (int i = 0; i < words.size(); i++)
        {
            // cout << words[i] << endl;
            words[i].resize(preSize);
            // cout << words[i] << endl;
            if (words[i] == pref)
                count++;
        }
        return count;
    }
};