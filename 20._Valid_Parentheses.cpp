// https://leetcode.com/problems/valid-parentheses/description/

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            cout << c;
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else if (!st.empty())
            {
                if (st.top() == '(' && c == ')')
                    st.pop();
                else if (st.top() == '{' && c == '}')
                    st.pop();
                else if (st.top() == '[' && c == ']')
                    st.pop();
                else
                    st.push(c);
            }
            else
                st.push(c);
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};