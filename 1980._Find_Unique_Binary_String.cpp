// https://leetcode.com/problems/find-unique-binary-string/description/
// Approach 3 of: https://www.youtube.com/watch?v=8Cay8q3BOx4&ab_channel=codestorywithMIK

class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        string result = "";
        for (int i = 0; i < n; i++)
        {
            char ch = nums[i][i];
            result += (ch == '0') ? '1' : '0';
        }
        return result;
    }
};