// https://leetcode.com/problems/plus-one/description/?envType=study-plan-v2&envId=top-interview-150

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        string s;
        for (int i = 0; i < digits.size(); i++)
        {
            s = s + to_string(digits[i]);
        }
        int value = 0;
        for (char c : s)
        {
            if (c >= '0' && c <= '9')
                value = value * 10 + (c - '0');
            cout << c << " ";
        }
        value = value + 1;
        cout << endl;
        string s2 = to_string(value);
        vector<int> v;
        for (int i = 0; i < s2.size(); i++)
        {
            cout << s2[i] << " ";
            v.push_back(s2[i] - 48);
        }
        return v;
    }
};