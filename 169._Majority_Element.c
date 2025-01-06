// https://leetcode.com/problems/majority-element/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (auto i : nums)
            count++;
        int mostFreq = nums[count / 2];
        cout << mostFreq;
        return mostFreq;
    }
};
