// https://leetcode.com/problems/find-lucky-integer-in-an-array/submissions/1687462633/?envType=daily-question&envId=2025-07-05
// https://www.youtube.com/watch?v=cGGJPSeHYaw&ab_channel=codestorywithMIK

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        unordered_map<int, int> mp;

        for (int &x : arr)
        {
            mp[x]++;
        }

        int ans = -1;
        for (auto &it : mp)
        {
            if (it.first == it.second)
                ans = max(ans, it.first);
        }

        return ans;
    }
};