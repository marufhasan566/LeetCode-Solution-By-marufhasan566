// https://leetcode.com/problems/count-number-of-bad-pairs/?envType=daily-question&envId=2025-02-09
// took help from youtube. revise this problem: https://www.youtube.com/watch?v=KCi1uoHdeLs&ab_channel=Techdose

class Solution
{
#define ll long long
public:
    long long countBadPairs(vector<int> &nums)
    {
        ll good_pairs_count = 0;
        unordered_map<int, int> freq;
        ll n = nums.size();
        // Good pair condition is (i - nums[i]) == (j - nums[j])
        for (int i = 0; i < n; i++)
        {
            if (freq.count(i - nums[i]))
                good_pairs_count += freq[i - nums[i]];
            freq[i - nums[i]]++;
        }
        // totat pairs are determined using nC2 combination formula
        ll total_pairs = n * (n - 1) / 2;
        ll bad_pairs_count = total_pairs - good_pairs_count;
        return bad_pairs_count;
    }
};