// https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/?envType=daily-question&envId=2025-04-08
// https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/?envType=daily-question&envId=2025-04-08
// Added

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        for (int v : nums)
            cout << v << " ";
        unordered_set<int> st;
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.contains(nums[i]))
                return i / 3 + 1;
            st.insert(nums[i]);
        }
        return 0;
    }
};