// https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=daily-question&envId=2025-05-04

class Solution
{
public:
    int numEquivDominoPairs(vector<vector<int>> &dominoes)
    {
        for (int i = 0; i < dominoes.size(); i++)
        {
            if (dominoes[i][0] > dominoes[i][1])
            {
                swap(dominoes[i][0], dominoes[i][1]);
            }
        }
        int countPairs = 0;
        for (int i = 0; i < dominoes.size() - 1; i++)
        {
            for (int j = i + 1; j < dominoes.size(); j++)
            {
                if (dominoes[i][0] == dominoes[j][0] &&
                    dominoes[i][1] == dominoes[j][1])
                {
                    countPairs++;
                }
            }
        }
        return countPairs;
    }
};