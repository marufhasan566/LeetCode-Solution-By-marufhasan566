// https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/?envType=daily-question&envId=2025-04-09
// https://www.youtube.com/watch?v=CwzGLhxi6nE&ab_channel=TechCourses


class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        unordered_set<int> st;
        for (int val : nums)
        {
            if (val < k)
                return -1;
            else if (val > k)
                st.insert(val);
        }
        return st.size();
    }
};