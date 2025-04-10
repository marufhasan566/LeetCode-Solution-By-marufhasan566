// https://leetcode.com/problems/fruits-into-baskets-ii/description/
// Just Added the solution. Revision Needed.

class Solution
{
public:
    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {

        int unplaced = 0;
        int n = fruits.size();

        for (int i = 0; i < n; i++)
        {
            bool placed = false;
            for (int j = 0; j < n; j++)
            {
                if (baskets[j] >= fruits[i])
                {
                    baskets[j] = -1;
                    placed = true;
                    break;
                }
            }
            if (!placed)
            {
                unplaced++;
            }
        }
        return unplaced;
    }
};