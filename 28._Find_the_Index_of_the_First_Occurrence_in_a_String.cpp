// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int idx = haystack.find(needle);
        return idx;
    }
};