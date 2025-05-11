// https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2025-05-11

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int count = 0;
        for (int v : arr)
        {
            cout << v << " ";
            if (v % 2 == 1)
            {
                count++;
                if (count == 3)
                {
                    return true;
                }
            }
            else
                count = 0;
        }
        return false;
    }
};
