// https://leetcode.com/problems/add-binary/description/?envType=study-plan-v2&envId=top-interview-150
// Help from YT: https://www.youtube.com/watch?v=SwPXgTiv8Ag&t=632s&ab_channel=KnowledgeCenter

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            int sum = carry;
            if (i >= 0)
                sum = sum + (a[i--] - '0');
            if (j >= 0)
                sum = sum + (b[j--] - '0');
            carry = sum > 1 ? 1 : 0;
            ans = ans + to_string(sum % 2);
        }
        if (carry)
            ans = ans + to_string(carry);
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
        return ans;
    }
};