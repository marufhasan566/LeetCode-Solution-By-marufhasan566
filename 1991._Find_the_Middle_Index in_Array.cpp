// https://leetcode.com/problems/find-the-middle-index-in-array/description/

class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        vector<int> left;
        vector<int> right;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            // detemining leftSums
            sum = 0;
            for (int j = 0; j < i; j++)
            {
                sum += nums[j];
            }
            left.push_back(sum);
            // detemining rightSums
            sum = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum += nums[j];
            }
            right.push_back(sum);
        }
        // check
        //  leftSum
        for (int i = 0; i < nums.size(); i++)
        {
            cout << left[i] << " ";
        }
        cout << endl;
        // rightSum
        for (int i = 0; i < nums.size(); i++)
        {
            cout << right[i] << " ";
        }
        int index = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (left[i] == right[i])
            {
                index = i;
                break;
            }
        }
        return index;
    }
};