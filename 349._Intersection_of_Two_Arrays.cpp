// https://leetcode.com/problems/intersection-of-two-arrays/description/

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> result;
        int count[1001] = {0};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (nums1[i] == nums2[j])
                    count[nums1[i]]++;
            }
        }
        for (int i = 0; i < 1001; i++)
        {
            if (count[i] != 0)
                result.push_back(i);
        }
        // check
        for (int i : result)
            cout << i << " ";
        return result;
    }
};