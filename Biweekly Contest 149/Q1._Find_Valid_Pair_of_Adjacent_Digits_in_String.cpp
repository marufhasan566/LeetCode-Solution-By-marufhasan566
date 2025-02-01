// https://leetcode.com/contest/biweekly-contest-149/problems/find-valid-pair-of-adjacent-digits-in-string/?slug=find-valid-pair-of-adjacent-digits-in-string&region=global_v2

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string findValidPair(string s)
    {
        int arr[10] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - '0';
            arr[x]++;
        }
        string res;
        for (int i = 0; i < s.length() - 1; i++)
        {
            int x = s[i] - '0';
            int x2 = s[i + 1] - '0';
            if (x == arr[x] && x2 == arr[x2] && x != x2)
            {
                // cout << x << "\t" << x2 << endl;
                // cout << to_string(x) << "\t" << to_string(x2) << endl;
                res += to_string(x);
                res += to_string(x2);
                break;
            }
        }
        // cout << res;
        return res;
    }
};