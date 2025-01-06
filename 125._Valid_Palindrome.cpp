// https://leetcode.com/problems/valid-palindrome/description/

class Solution
{
public:
    bool isPalindrome(string s)
    {
        vector<char> letters;

        for (char c : s)
        {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {

                letters.push_back(tolower(c));
            }
            else if (c >= '0' && c <= '9')
            {
                letters.push_back(c);
            }
        }
        // check
        for (char c : letters)
            cout << c;
        vector<char> letters2(letters);
        reverse(letters2.begin(), letters2.end());
        bool flag = true;
        if (letters != letters2)
            flag = false;
        return flag;
    }
};