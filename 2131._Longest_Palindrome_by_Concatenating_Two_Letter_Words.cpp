// https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/description/?envType=daily-question&envId=2025-05-25
// https://www.youtube.com/watch?v=Q9EhdRmisVU&ab_channel=codestorywithMIK

class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        unordered_map<string, int> mp;

        for (string &word : words)
        {
            mp[word]++;
        }
        bool centerUsed = false;
        int result = 0;

        for (string &word : words)
        {
            string rev = word;
            reverse(begin(rev), end(rev));

            if (rev != word)
            { //"ab" "ba"    ->.  {ab      ba}
                if (mp[word] > 0 && mp[rev] > 0)
                {
                    mp[word]--;
                    mp[rev]--;
                    result += 4;
                }
            }
            else
            { //"abcc      ccba"
                if (mp[word] >= 2)
                {
                    mp[word] -= 2;
                    result += 4;
                }
                else if (mp[word] == 1 && centerUsed == false)
                {
                    mp[word]--;
                    result += 2;
                    centerUsed = true;
                }
            }
        }
        return result;
    }
};
