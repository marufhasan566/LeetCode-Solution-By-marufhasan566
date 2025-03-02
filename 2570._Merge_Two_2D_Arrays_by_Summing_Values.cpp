// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/
// Help from: https://www.youtube.com/watch?v=7wSZv16Pug4&ab_channel=Techdose

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1,
                                    vector<vector<int>> &nums2)
    {
        vector<vector<int>> result;
        int p1 = 0;
        int p2 = 0;

        int m = nums1.size();
        int n = nums2.size();

        while (p1 < m && p2 < n)
        {
            if (nums1[p1][0] == nums2[p2][0])
            {
                result.push_back(nums1[p1]);
                result.back()[1] += nums2[p2][1];
                p1++;
                p2++;
            }

            else if (nums1[p1][0] < nums2[p2][0])
            {
                result.push_back(nums1[p1]);
                p1++;
            }

            else
            {
                result.push_back(nums2[p2]);
                p2++;
            }
        }

        while (p1 < m)
        {
            result.push_back(nums1[p1]);
            p1++;
        }

        while (p2 < n)
        {
            result.push_back(nums2[p2]);
            p2++;
        }

        return result;
    }
};