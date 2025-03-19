// https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/?envType=daily-question&envId=2025-03-19
// https://www.youtube.com/watch?v=477rIny7RSI&t=33s&ab_channel=Techdose
//Just added. DUA

class Solution {
    void flipWindow(vector<int>& nums, int pos) {
        nums[pos] ^= 1;
        nums[pos + 1] ^= 1;
        nums[pos + 2] ^= 1;
    }

public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int operations = 0;
        for (int i = 0; i < n - 2; ++i) {
            if (nums[i] == 1)
                continue;
            flipWindow(nums, i);
            operations++;
        }
        if (nums[n - 2] == 0 or nums[n - 1] == 0)
            return -1;
        return operations;
    }
};