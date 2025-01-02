// https://leetcode.com/problems/find-the-n-th-value-after-k-seconds/description/

int mod = 1e9 + 7;
// https://www.reddit.com/r/leetcode/comments/vptd4c/how_do_you_modulo_1097_to_answer_in_leetcode/
class Solution
{
public:
    int valueAfterKSeconds(int n, int k)
    {
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = 1;
        }
        while (k--)
        {
            for (int i = 0; i < n; i++)
            {
                if (i != 0)
                    v[i] = (v[i] + v[i - 1]) % mod;
            }
        }
        // check
        for (int i : v)
            cout << i << " ";
        return v[n - 1] % mod;
    }
};