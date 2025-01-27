// https://leetcode.com/problems/contains-duplicate/description/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        bool flag = false;
        // check
        for (int i = 0; i < nums.size(); i++)
        {
            // cout << mp[nums[i]] << " ";
            if (mp[nums[i]] >= 2)
                flag = true;
        }
        return flag;
    }
};