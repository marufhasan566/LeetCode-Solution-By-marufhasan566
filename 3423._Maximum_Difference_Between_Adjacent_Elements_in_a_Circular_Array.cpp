// https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/

class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        vector<int> nums2(nums);
        nums2.push_back(nums[0]);
        int mx = INT_MIN;
        for (int i = 0; i < nums2.size() - 1; i++)
        {
            int ans = abs(nums2[i] - nums2[i + 1]);
            mx = max(mx, ans);
        }
        return mx;
    }
};