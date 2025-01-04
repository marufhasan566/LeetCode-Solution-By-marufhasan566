// https://leetcode.com/problems/binary-search/description/

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int i = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (target == nums[mid])
            {
                i = mid;
                break;
            }
            else if (target > nums[mid])
                l = mid + 1;
            else if (target < nums[mid])
                r = mid - 1;
        }
        return i;
    }
};