// https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/
// https://www.youtube.com/watch?v=TnpowktUe1E&t=33s&ab_channel=Techdose

class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int n = nums.size();
        int orr = 0;
        for (int ele : nums)
            orr |= ele;
        return orr * (1 << (n - 1));
    }
};