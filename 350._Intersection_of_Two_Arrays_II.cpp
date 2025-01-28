// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    res.push_back(nums1[i]);
                    nums1[i] = -1; // matched value in nums1 is marked as -1
                    nums2[j] = -2; // matched value in nums2 is marked as -2
                }
            }
        }
        return res;
    }
};