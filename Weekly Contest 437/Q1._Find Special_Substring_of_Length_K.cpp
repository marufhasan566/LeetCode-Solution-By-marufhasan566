// https://leetcode.com/contest/weekly-contest-437/problems/find-special-substring-of-length-k/?slug=find-special-substring-of-length-k&region=global_v2

class Solution
{
public:
    bool hasSpecialSubstring(string s, int k)
    {
        int sz = s.length();
        if (k > sz)
            return false;

        for (int i = 0; i <= sz - k; i++)
        {
            string ss = s.substr(i, k);
            bool flag1 = true, flag2 = true, flag3 = true;

            for (int j = 1; j < k; j++)
            {
                if (ss[j] != ss[0])
                {
                    flag1 = false;
                    break;
                }
            }

            if (i - 1 >= 0 && s[i - 1] == ss[0])
                flag2 = false;
            if (i + k < sz && s[i + k] == ss[0])
                flag3 = false;

            if (flag1 && flag2 && flag3)
                return true;
        }
        return false;
    }
};

// class Solution {
// public:
//     bool hasSpecialSubstring(string s, int k) {
//         int sz = s.length();
//         bool flag1 = true;
//         bool flag2 = true;
//         bool flag3 = true;
//         for (int i = 0; i < sz; i++) {
//             int j = 0;
//             while (k--) {
//                 if (i + j < sz && s[i] != s[i + j]) {
//                     flag1 = false;
//                 }
//                 j++;
//             }
//             if (i - 1 >= 0 && s[i] == s[i - 1]) {
//                 flag2 = false;
//             }
//             if (i + k - 1 < sz && s[i] == s[i + k - 1]) {
//                 flag3 = false;
//             }
//         }
//         if (flag1 && flag2 && flag3)
//             return true;
//         else
//             return false;
//     }
// };©leetcode