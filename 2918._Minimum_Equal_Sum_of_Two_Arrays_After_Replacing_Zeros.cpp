// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/description/?envType=daily-question&envId=2025-05-10
// https://www.youtube.com/watch?v=zV6XTPzljBc&ab_channel=Techdose

class Solution
{
    using ll = long long;

    void calculate(ll &min_sum, int &zero_count, vector<int> &nums)
    {
        for (int ele : nums)
        {
            if (ele == 0)
            {
                zero_count++;
                min_sum++;
            }
            else
                min_sum += ele;
        }
    }

public:
    long long minSum(vector<int> &nums1, vector<int> &nums2)
    {
        ll min_sum1 = 0;
        int zero_count1 = 0;
        calculate(min_sum1, zero_count1, nums1);

        ll min_sum2 = 0;
        int zero_count2 = 0;
        calculate(min_sum2, zero_count2, nums2);

        if ((min_sum1 < min_sum2 and zero_count1 == 0) or
            (min_sum2 < min_sum1 and zero_count2 == 0))
            return -1;
        return max<ll>(min_sum1, min_sum2);
    }
};