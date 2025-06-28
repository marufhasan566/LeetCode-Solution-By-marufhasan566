// https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/description/?envType=daily-question&envId=2025-06-28
// https://www.youtube.com/watch?v=J6tGPJmCXG4&ab_channel=codestorywithMIK

class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (k == n)
            return nums;

        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            vec[i] = make_pair(i, nums[i]);
        }

        auto lambda = [](auto &p1, auto &p2)
        {
            return p1.second > p2.second;
        };

        sort(begin(vec), end(vec), lambda);

        sort(begin(vec), begin(vec) + k);

        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            result.push_back(vec[i].second);
        }

        return result;
    }
};
