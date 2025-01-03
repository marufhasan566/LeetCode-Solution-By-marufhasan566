// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/
class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        for (int i : nums)
        {
            if (i > 0)
                pos.push_back(i);
            if (i < 0)
                neg.push_back(i);
        }
        int maximum = max(pos.size(), neg.size());
        cout << maximum << endl;
        return maximum;
    }
};