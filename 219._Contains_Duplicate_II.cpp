// https://leetcode.com/problems/contains-duplicate-ii/description/?envType=study-plan-v2&envId=top-interview-150
// took a bit help from YT: https://www.youtube.com/watch?v=8gMuYBojG0A&ab_channel=CodewithSky

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.count(nums[i]))
            {
                if (abs(mp[nums[i]] - i) <= k)
                {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};