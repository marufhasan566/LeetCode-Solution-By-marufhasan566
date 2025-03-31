// https://leetcode.com/problems/put-marbles-in-bags/description/?envType=daily-question&envId=2025-03-31
// https://www.youtube.com/watch?v=L-KWU8W3OqE&ab_channel=codestorywithMIK
// https://github.com/MAZHARMIK/Interview_DS_Algo/blob/master/Arrays/Put%20Marbles%20in%20Bags.cpp

class Solution
{
public:
    long long putMarbles(vector<int> &weights, int k)
    {
        int n = weights.size();

        vector<int> pairSum(n - 1, 0);

        for (int i = 0; i < n - 1; i++)
        {
            pairSum[i] = weights[i] + weights[i + 1];
        }

        sort(begin(pairSum), end(pairSum));
        long maxSum = 0;
        long minSum = 0;

        for (int i = 0; i < k - 1; i++)
        {
            minSum += pairSum[i];
            maxSum += pairSum[n - i - 2];
        }

        return maxSum - minSum;
    }
};