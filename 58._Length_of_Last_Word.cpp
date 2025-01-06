// https://leetcode.com/problems/length-of-last-word/description/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        stringstream ss(s);
        string word;
        while (ss >> word)
            cout << word << " ";
        // cout<<word;
        int count = 0;
        for (char c : word)
            count++;
        return count;
    }
};