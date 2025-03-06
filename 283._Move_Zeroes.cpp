// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                result.push_back(nums[i]);
            else
                zeros++;
        }
        while (zeros--) {
            result.push_back(0);
        }
        nums.clear();
        for (int v : result)
            nums.push_back(v);
    }
};