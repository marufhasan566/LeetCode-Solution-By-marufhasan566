// https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/?envType=daily-question&envId=2025-04-02
// O(n^3) Complexity. Very Bad Complexity

class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long maximum = 0;
        int i = 0;
        int last_idx = nums.size() - 1;
        while (i <= last_idx - 2)
        {
            int j = i + 1;
            while (j <= last_idx - 1)
            {
                int k = j + 1;
                while (k <= last_idx)
                {
                    long long math_res =
                        (long long)(nums[i] - nums[j]) * nums[k];
                    cout << math_res << endl;
                    maximum = max(math_res, maximum);
                    k++;
                }
                j++;
            }
            i++;
        }
        return maximum;
    }
};