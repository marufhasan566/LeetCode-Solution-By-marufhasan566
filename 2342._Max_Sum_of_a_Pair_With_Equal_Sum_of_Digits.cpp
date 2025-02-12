// https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/?envType=daily-question&envId=2025-02-12
// I came up with this solution by myself using brute-force method.

class Solution
{
public:
    int maximumSum(vector<int> &nums)
    {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            int num = nums[i];
            while (num != 0)
            {
                int r = num % 10;
                sum += r;
                num = num / 10;
            }
            mp[sum].push_back(i);
        }
        int ans = -1;
        // check
        for (auto pair : mp)
        {
            // cout << "Sum: " << pair.first << "\t\t" << "Indices: ";
            // cout << pair.second.size();
            int indices = pair.second.size();
            if (indices >= 2)
            {
                int sum = 0;
                for (int i = 0; i < indices - 1; i++)
                {
                    for (int j = i + 1; j < indices; j++)
                    {
                        sum = max(sum,
                                  nums[pair.second[i]] + nums[pair.second[j]]);
                    }
                }
                ans = max(ans, sum);
            }
            /*
            for (int index : pair.second) {
                cout << index << " ";

            }
            */
            // cout << endl;
        }
        return ans;
    }
};