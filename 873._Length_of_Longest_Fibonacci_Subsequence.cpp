// https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/description/?envType=daily-question&envId=2025-02-27
// Help from: https://www.youtube.com/watch?v=s9I8KQZYh1M&ab_channel=Techdose
// Medium Level Problem. Must Revise.

class Solution
{
public:
    int lenLongestFibSubseq(vector<int> &arr)
    {
        int n = arr.size();
        unordered_set<int> values(arr.begin(), arr.end());

        int longest_subsequence = 0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int a = arr[i];
                int b = arr[j];
                int fibonacci_length = 2;
                while (values.count(a + b))
                {
                    int sum = a + b;
                    a = b;
                    b = sum;
                    fibonacci_length++;
                }

                if (fibonacci_length > 2)
                    longest_subsequence =
                        max(longest_subsequence, fibonacci_length);
            }
        }
        return longest_subsequence;
    }
};