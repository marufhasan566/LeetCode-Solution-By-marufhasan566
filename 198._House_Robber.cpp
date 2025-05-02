// https://leetcode.com/problems/house-robber/submissions/1623788095/?envType=study-plan-v2&envId=top-interview-150
// https://www.youtube.com/watch?v=SI6Pm8AKqnQ&ab_channel=codestorywithMIK

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int prevPrev = 0;
        int prev = nums[0];

        for (int i = 2; i <= n; i++) {
            int skip = prev;

            int take = nums[i - 1] + prevPrev;

            int temp = max(skip, take);

            prevPrev = prev;
            prev = temp;
        }

        return prev;
    }
};