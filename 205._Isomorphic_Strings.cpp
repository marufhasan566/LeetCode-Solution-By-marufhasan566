// https://leetcode.com/problems/isomorphic-strings/description/?envType=study-plan-v2&envId=top-interview-150
// a bit help from discussion but came up with my own solution

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int countShouldBe = s.length(); // or t.length()
        map<char, char> mp1;
        int count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (mp1.count(s[i]))
            {
                if (mp1[s[i]] == t[i])
                {
                    count1++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                mp1[s[i]] = t[i];
                count1++;
            }
        }
        map<char, char> mp2;
        int count2 = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (mp2.count(t[i]))
            {
                if (mp2[t[i]] == s[i])
                {
                    count2++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                mp2[t[i]] = s[i];
                count2++;
            }
        }
        cout << countShouldBe << "\t" << count1 << "\t" << count2 << endl;
        if (count1 == countShouldBe && count2 == countShouldBe)
            return true;
        else
            return false;
    }
};
