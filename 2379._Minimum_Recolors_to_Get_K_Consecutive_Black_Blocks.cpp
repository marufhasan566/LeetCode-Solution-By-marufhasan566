// https : // leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08
// Idea taken from: https://www.youtube.com/watch?v=cWz4_zUegxE&ab_channel=NeetCodeIO. Not the code.
class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int minimumOP = INT_MAX;
        for (int i = 0; i <= blocks.size() - k; i++)
        {
            int countWhite = 0;
            for (int j = i; j < i + k; j++)
            {
                if (blocks[j] == 'W')
                {
                    countWhite++;
                }
                // cout << blocks[j];
            }
            // cout << endl;
            // cout << countWhite << endl;
            minimumOP = min(minimumOP, countWhite);
        }
        // cout << minimumOP;
        return minimumOP;
    }
};