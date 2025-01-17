// https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/?envType=daily-question&envId=2025-01-16

class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        int res = 0;
        if (m % 2 == 0 & n % 2 == 0)
        {
            res = 0;
        }
        else if (m % 2 == 0 && n % 2 == 1)
        {
            for (int i : nums1)
                res ^= i;
        }
        else if (m % 2 == 1 && n % 2 == 0)
        {
            for (int i : nums2)
                res ^= i;
        }
        else if (m % 2 == 1 && n % 2 == 1)
        {
            for (int i : nums1)
                res ^= i;
            for (int i : nums2)
                res ^= i;
        }
        return res;
    }
}