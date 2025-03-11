// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/?envType=daily-question&envId=2025-03-11
// https://www.youtube.com/watch?v=7oIIiZMEYMc&ab_channel=Techdose

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.size();
        int subarrays = 0;
        vector<int> freq(3, 0);

        int left = 0, right = 0;
        while (right < n)
        {
            freq[s[right] - 'a']++;

            while (freq[0] > 0 and freq[1] > 0 and freq[2] > 0)
            {
                subarrays += n - right;
                freq[s[left] - 'a']--;
                left++;
            }
            right++;
        }
        return subarrays;
    }
};