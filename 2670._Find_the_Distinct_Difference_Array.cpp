// https://leetcode.com/problems/find-the-distinct-difference-array/description/

vector<int> prefix;
vector<int> suffix;
vector<int> distinct;
int countDistinct(vector<int> v)
{
    int freq[51] = {0};
    for (int i = 0; i < v.size(); i++)
    {
        freq[v[i]]++;
    }
    int count = 0;
    for (int i = 0; i < 51; i++)
    {
        if (freq[i] != 0)
            count++;
    }
    return count;
}
class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        prefix.clear();
        suffix.clear();
        distinct.clear();
        for (int i = 0; i < nums.size(); i++)
        {
            // cout << nums[i] << " ";
            // count distinct elements of the prefix of the array
            prefix.clear();
            for (int j = 0; j <= i; j++)
            {
                prefix.push_back(nums[j]);
            }
            // count distinct elements of the suffix of the array
            suffix.clear();
            for (int j = i + 1; j < nums.size(); j++)
            {
                suffix.push_back(nums[j]);
            }
            int diff = countDistinct(prefix) - countDistinct(suffix);
            distinct.push_back(diff);
        }
        // check
        for (int i : distinct)
            cout << i << " ";
        return distinct;
    }
};