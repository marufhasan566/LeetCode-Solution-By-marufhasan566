// https://leetcode.com/problems/sort-colors/description/?envType=daily-question&envId=2025-05-17
// https://www.youtube.com/watch?v=6sMssUHgaBs&t=608s&ab_channel=NikhilLohia

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int start = 0;
        int mid = 0;
        int end = nums.size() - 1;

        while (mid <= end)
        {
            switch (nums[mid])
            {
            case 0:
                swap(nums[start], nums[mid]);
                mid++;
                start++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(nums[mid], nums[end]);
                end--;
                break;
            }
        }
    }
};