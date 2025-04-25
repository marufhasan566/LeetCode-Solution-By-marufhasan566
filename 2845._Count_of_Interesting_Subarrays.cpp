// https://leetcode.com/problems/count-of-interesting-subarrays/description/?envType=daily-question&envId=2025-04-25
// https://www.youtube.com/watch?v=1LrN9L0rndw&ab_channel=Techdosehttps://www.youtube.com/watch?v=1LrN9L0rndw&ab_channel=Techdose

class Solution
{
#define ll long long
public:
    long long countInterestingSubarrays(vector<int> &nums, int modulo, int k)
    {
        ll n = nums.size();
        ll pos = 0;
        ll interesting_subarrays = 0;
        ll prefix_count = 0;

        unordered_map<ll, ll> mod_freq;
        mod_freq[0] = 1;
        while (pos < n)
        {
            if (nums[pos] % modulo == k)
                prefix_count++;

            prefix_count %= modulo;
            if (mod_freq.count((prefix_count - k + modulo) % modulo))
                interesting_subarrays += mod_freq[(prefix_count - k + modulo) % modulo];

            mod_freq[prefix_count]++;
            pos++;
        }
        return interesting_subarrays;
    }
};