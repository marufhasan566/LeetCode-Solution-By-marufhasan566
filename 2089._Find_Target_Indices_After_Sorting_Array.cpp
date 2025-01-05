// https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

class Solution
{
public:
    vector<int> targetIndices(vector<int> &v, int target)
    {
        sort(v.begin(), v.end());
        vector<int> indices;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
            if (v[i] == target)
                indices.push_back(i);
        }
        return indices;
    }
};