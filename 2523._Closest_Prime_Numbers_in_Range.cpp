// https://leetcode.com/problems/closest-prime-numbers-in-range/description/?envType=daily-question&envId=2025-03-07
// Help from YT
// https://www.youtube.com/watch?v=xNLNbajE310&ab_channel=Techdose
// https://www.youtube.com/watch?v=pKvGYOnO9Ao&ab_channel=Techdose

class Solution
{
public:
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> isPrime(right + 1, true);
        for (int i = 2; i * i <= right; i++)
        {
            if (isPrime[i])
            {
                for (int j = 2; i * j <= right; j++)
                    isPrime[i * j] = false;
            }
        }

        vector<int> primes;
        for (int i = max(2, left); i <= right; i++)
        {
            if (isPrime[i])
                primes.push_back(i);
        }

        int a = 0;
        int b = INT_MAX;
        for (int i = 1; i < primes.size(); i++)
        {
            if ((b - a) > (primes[i] - primes[i - 1]))
            {
                b = primes[i];
                a = primes[i - 1];
            }
        }
        A
            vector<int>
                result;
        if (a == 0)
            result = {-1, -1};
        else
            result = {a, b};

        return result;
    }
};