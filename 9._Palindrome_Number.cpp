// https://leetcode.com/problems/palindrome-number/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s1 = to_string(x);
        string s2 = s1;
        // check:
        //  for(auto i:s)
        //      cout<<i<<" ";
        reverse(s2.begin(), s2.end());
        if (s1 == s2)
            return true;
        else
            return false;
    }
};