// https://leetcode.com/problems/search-insert-position/description/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                ans = i;
                flag = true;
            }
        }
        if (flag == false)
        {
            nums.push_back(target);
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                if (target == nums[i])
                {
                    ans = i;
                }
            }
        }
        return ans;
    }
};