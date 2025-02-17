// https://leetcode.com/problems/letter-tile-possibilities/description/?envType=daily-question&envId=2025-02-17
// Solution taken from: https://www.youtube.com/watch?v=k3XBSQTnETU&ab_channel=Techdose
// Did I understand properly? No

class Solution
{
    int buildString(vector<int> &freq)
    {
        int ways = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                freq[i]--;
                ways += 1 + buildString(freq);
                freq[i]++;
            }
        }
        return ways;
    }

public:
    int numTilePossibilities(string tiles)
    {
        vector<int> freq(26, 0);
        for (char c : tiles)
            freq[c - 'A']++;
        return buildString(freq);
    }
};