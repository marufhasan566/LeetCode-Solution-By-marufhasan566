// https://leetcode.com/problems/count-subarrays-with-score-less-than-k/description/?envType=daily-question&envId=2025-04-28
// https://www.youtube.com/watch?v=CtLsKfvG06s&ab_channel=Techdose

class Solution {
    using ll = long long;

public:
    long long countSubarrays(const vector<int>& nums, long long k) {
        ll n = nums.size();
        ll left = 0, right = 0; // window is [left, right)
        ll sum = 0;             // sum of nums[left..right-1]
        ll count = 0;

        while (left < n) {
            // Find largest valid window
            while (right < n and (sum + nums[right]) * (right - left + 1) < k)
                sum += nums[right++];

            count += right - left; // All subarrays starting at `left` and
                                   // ending before `right` are valid

            // Slide the window forward by removing nums[left]
            if (right == left) // If we couldn’t even include nums[left], move
                               // both pointers past it
                right++;
            else
                sum -= nums[left];

            left++;
        }
        return count;
    }
};