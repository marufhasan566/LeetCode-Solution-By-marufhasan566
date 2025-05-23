// https://leetcode.com/problems/sort-the-people/description/?envType=problem-list-v2&envId=array
// https://www.youtube.com/watch?v=LqpcOB2Sz9Y&ab_channel=Technosier

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        unordered_map<int, string> mapping;
        int n = names.size();

        for (int i = 0; i < n; i++)
        {
            mapping[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            names[i] = mapping[heights[i]];
        }

        return names;
    }
};
