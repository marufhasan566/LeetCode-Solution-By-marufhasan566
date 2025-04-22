// https://leetcode.com/problems/single-number-ii/description/?envType=study-plan-v2&envId=top-interview-150
// https://www.youtube.com/watch?v=cOFAmaMBVps&ab_channel=Techdose
// https://gist.github.com/SuryaPratapK/adc19b0c553dcb17dd6cafe2485fabdc

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if (n < 3)
            return nums[0];

        sort(nums.begin(), nums.end());
        if (nums[0] != nums[1])
            return nums[0];
        int i = 1;
        while (i < n) {
            if (nums[i] != nums[i - 1])
                return nums[i - 1];
            i += 3;
        }
        return nums[n - 1];
    }
};