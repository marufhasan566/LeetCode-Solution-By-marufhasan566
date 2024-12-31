// https://leetcode.com/problems/left-and-right-sum-differences/description/

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> left;
        vector<int> right;
        vector<int> diff;
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
        for (int i = 0; i < nums.size(); i++)
        {
            int ans = abs(left[i] - right[i]);
            diff.push_back(ans);
        }
        for (int i : diff)
            cout << i << " ";
        return diff;
    }
};