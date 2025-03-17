// https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-03-17
// https://www.youtube.com/watch?v=WDqbT_ZBoQA&ab_channel=Techdose

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        unordered_set<int> isempty;
        for (int element : nums)
        {
            if (isempty.count(element))
                isempty.erase(element);
            else
                isempty.insert(element);
        }
        return (isempty.size() == 0) ? true : false;
    }
};