// https://leetcode.com/problems/find-pivot-index/description/

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        vector<int> left;
        vector<int> right;
        int sum;
        for (int i = 0; i < nums.size(); i++)
        {
            // determine leftSum
            sum = 0;
            for (int j = 0; j < i; j++)
            {
                sum += nums[j];
            }
            left.push_back(sum);
            // determine rightSum
            sum = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum += nums[j];
            }
            right.push_back(sum);
        }
        // check
        for (int i : left)
            cout << i << " ";
        cout << endl;
        for (int i : right)
            cout << i << " ";
        cout << endl;
        // determine output
        int pi;
        for (int i = 0; i < nums.size(); i++)
        {
            if (left[i] == right[i])
            {
                pi = i;
                break;
            }
            else
                pi = -1;
        }
        return pi;
    }
};