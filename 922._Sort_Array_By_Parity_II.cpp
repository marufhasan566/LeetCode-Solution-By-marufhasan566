// https://leetcode.com/problems/sort-array-by-parity-ii/description/?envType=problem-list-v2&envId=array
// https://www.youtube.com/watch?v=EMzqlzUk0XY&t=408s&ab_channel=CodeGPT

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int n = nums.size();
        int even = 0;
        int odd = 1;

        while (even < n && odd < n)
        {
            while (even < n && nums[even] % 2 == 0)
            {
                even += 2;
            }

            while (odd < n && nums[odd] % 2 == 1)
            {
                odd += 2;
            }

            if (even < n && odd < n)
            {
                int temp = nums[even];
                nums[even] = nums[odd];
                nums[odd] = temp;
            }
        }

        return nums;
    }
};
