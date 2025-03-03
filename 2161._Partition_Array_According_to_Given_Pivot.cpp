// https://leetcode.com/problems/partition-array-according-to-given-pivot/description/?envType=daily-question&envId=2025-03-03

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> result;
        // less than pivot
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < pivot)
            {
                result.push_back(nums[i]);
            }
        }
        // equal to pivot
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == pivot)
            {
                result.push_back(nums[i]);
            }
        }
        // greater than pivot
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > pivot)
            {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};