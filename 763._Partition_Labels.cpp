// https://leetcode.com/problems/partition-labels/description/?envType=daily-question&envId=2025-03-30
// https://www.youtube.com/watch?v=aUVEMnlcw4E&ab_channel=NikhilLohia

class Solution
{
public:
    vector<int> partitionLabels(string str)
    {
        vector<int> partitions;

        for (size_t i = 0; i < str.length();)
        {
            // Get first and last index of first character
            size_t startIndex = i;
            size_t endIndex = str.find_last_of(str[startIndex]);

            for (size_t s = startIndex + 1; s < endIndex; s++)
            {
                // Find last index of any subsequent characters
                size_t lastIndexOfNextChar = str.find_last_of(str[s]);

                if (lastIndexOfNextChar > endIndex)
                {
                    // Update endIndex if required
                    endIndex = lastIndexOfNextChar;
                }
            }

            partitions.push_back(endIndex - startIndex + 1);
            i = endIndex + 1;
        }

        return partitions;
    }
};