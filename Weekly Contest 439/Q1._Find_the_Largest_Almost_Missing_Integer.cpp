https : // leetcode.com/contest/weekly-contest-439/problems/find-the-largest-almost-missing-integer/?slug=find-the-largest-almost-missing-integer&region=global_v2

        class Solution
{
public:
    int largestInteger(vector<int> &nums, int k)
    {
        unordered_map<int, int> frequency;

        for (int i = 0; i <= nums.size() - k; i++)
        {
            unordered_set<int> subarray_elements;

            for (int j = i; j < i + k; j++)
            {
                subarray_elements.insert(nums[j]);
            }

            for (int num : subarray_elements)
            {
                frequency[num]++;
            }
        }

        int result = -1;

        for (auto [num, freq] : frequency)
        {
            if (freq == 1)
            {
                result = max(result, num);
            }
        }

        return result;
    }
};
©leetcode