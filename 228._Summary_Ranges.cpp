// https://leetcode.com/problems/summary-ranges/description/

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> res;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            int start = nums[i];
            while (i + 1 < size && nums[i + 1] == nums[i] + 1)
                i++;
            if (start != nums[i])
            {
                string s = to_string(start);
                string s2 = to_string(nums[i]);
                res.push_back(s + "->" + s2);
            }
            else
            {
                string s = to_string(start);
                res.push_back(s);
            }
        }
        return res;
    }
};