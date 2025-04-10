// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/?envType=study-plan-v2&envId=top-interview-150

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        int l = 0;
        int r = nums.size() - 1;

        while (l < r)
        {
            int sum = nums[l] + nums[r];
            if (sum == target)
            {
                res.push_back(l + 1);
                res.push_back(r + 1);
                break;
            }
            else if (sum < target)
            {
                l++;
            }
            else if (sum > target)
            {
                r--;
            }
        }
        return res;
    }
};