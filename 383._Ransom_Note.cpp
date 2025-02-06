// https://leetcode.com/problems/ransom-note/description/?envType=study-plan-v2&envId=top-interview-150

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        for (int i = 0; i < ransomNote.length(); i++)
        {
            for (int j = 0; j < magazine.length(); j++)
            {
                if (ransomNote[i] == magazine[j])
                {
                    ransomNote[i] = '.';
                    magazine[j] = '.';
                }
            }
        }
        cout << ransomNote << "\t" << magazine << endl;
        bool flag = true;
        for (char c : ransomNote)
        {
            if (c != '.')
                flag = false;
        }
        return flag;
    }
};