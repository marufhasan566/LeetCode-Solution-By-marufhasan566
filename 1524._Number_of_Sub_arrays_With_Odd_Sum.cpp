// https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/?envType=daily-question&envId=2025-02-25
// Taken from YT:  https://www.youtube.com/watch?v=_tAArozuTwA&ab_channel=codestorywithMIK

class Solution
{
public:
    int M = 1e9 + 7;
    int numOfSubarrays(vector<int> &arr)
    {
        int n = arr.size();

        int count = 0;
        int odd = 0;
        int even = 1;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum % 2 == 0)
            { // odd + even = odd
                count = (count + odd) % M;
                even++;
            }
            else
            { // even + odd = odd
                count = (count + even) % M;
                odd++;
            }
        }

        return count;
    }
};