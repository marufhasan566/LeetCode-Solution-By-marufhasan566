// https://leetcode.com/problems/missing-number/

class Solution
{
public:
    int missingNumber(vector<int> &v)
    {
        int size = v.size();
        int arrSumLarge = size * (size + 1) / 2;
        int arrSumSmall = 0;
        for (int i : v)
            arrSumSmall += i;
        int mn = arrSumLarge - arrSumSmall;
        cout << mn << endl;
        return mn;
    }
};