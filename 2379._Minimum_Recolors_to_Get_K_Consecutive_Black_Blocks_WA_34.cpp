// https : // leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08

        class Solution
{
    int findMaximumBlack(string blocks)
    {
        int countBlack = 0, maxBlack = 0;
        for (char c : blocks)
        {
            if (c == 'B')
            {
                countBlack++;
                maxBlack = max(countBlack, maxBlack);
            }
            else
            {
                countBlack = 0;
            }
        }
        return maxBlack;
    }

public:
    int minimumRecolors(string &blocks, int k)
    {
        int maxBlack = findMaximumBlack(blocks);
        if (maxBlack >= k)
        {
            return 0;
        }
        else
        {
            vector<int> whiteIndices;
            for (int i = 0; i < blocks.size(); i++)
            {
                if (blocks[i] == 'W')
                {
                    whiteIndices.push_back(i);
                }
            }
            int minimumOP = 0;
            for (int i = 0; i < whiteIndices.size(); i++)
            {
                blocks[whiteIndices[i]] = 'B';
                minimumOP++;
                int maxBlack = findMaximumBlack(blocks);
                if (maxBlack == k)
                    break;
            }
            cout << minimumOP;
            return minimumOP;
        }
    }
};