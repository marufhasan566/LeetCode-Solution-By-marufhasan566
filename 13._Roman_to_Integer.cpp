// https://leetcode.com/problems/roman-to-integer/description/

class Solution
{
public:
    int romanToInt(string s)
    {
        // cout<<s.length()<<endl;
        int total = 0;
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (mp[s[i]] < mp[s[i + 1]])
                total = total - mp[s[i]];
            else
                total = total + mp[s[i]];
        }
        total = total + mp[s[s.length() - 1]];
        return total;
    }
};