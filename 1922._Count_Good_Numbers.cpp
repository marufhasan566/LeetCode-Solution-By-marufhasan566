// https://leetcode.com/problems/count-good-numbers/description/?envType=daily-question&envId=2025-04-13
// https://gist.github.com/SuryaPratapK/28ef5f0b857852f4ab82e5a03047f886

class Solution
{
#define ll long long
    int MOD = 1000000007;

    ll binaryExponentiation(ll a, ll b)
    {
        ll res = 1;
        while (b)
        {
            if (b & 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            b /= 2;
        }
        return res;
    }

public:
    int countGoodNumbers(long long n)
    {
        return (binaryExponentiation(4, n / 2) *
                binaryExponentiation(5, n - n / 2)) %
               MOD;
    }
};