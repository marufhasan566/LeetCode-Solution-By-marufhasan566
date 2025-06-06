// https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150
// https://www.youtube.com/watch?v=jDoRh0NNjzo&ab_channel=AyushiSharma

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};