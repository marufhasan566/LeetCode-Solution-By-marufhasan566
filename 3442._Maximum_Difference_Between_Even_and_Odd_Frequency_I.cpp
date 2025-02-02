// https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/

class Solution
{
public:
    int maxDifference(string s)
    {
        int ar[101] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            ar[s[i] - 'a']++;
        }
        // check
        int diff = INT_MIN;
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < 101; i++)
        {
            if (ar[i] != 0)
            {
                if (ar[i] % 2 == 0)
                    even.push_back(ar[i]);
                if (ar[i] % 2 == 1)
                    odd.push_back(ar[i]);
            }
        }
        for (int i = 0; i < even.size(); i++)
        {
            // cout << even[i] << " ";
            for (int j = 0; j < odd.size(); j++)
            {
                // cout << odd[j] << " ";
                diff = max(diff, (odd[j] - even[i]));
            }
        }
        cout << diff << endl;
        return diff;
    }
};