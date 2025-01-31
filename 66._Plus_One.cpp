// https://leetcode.com/problems/plus-one/description/?envType=study-plan-v2&envId=top-interview-150

class Solution
{
public:
    vector<int> plusOne(vector<int> &v)
    {
        // int sz= digits.size()-1;
        // cout<<digits[sz];
        // if(digits[sz]==9){
        //     digits[sz]=1;
        //     digits.push_back(0);
        // }
        // else{
        //     digits[sz] = digits[sz]+1;
        // }
        // return digits;
        stack<int> st;
        for (auto i : v)
        {
            st.push(i);
        }

        int countZero = 0;
        while (!st.empty())
        {
            if (st.top() == 9)
            {
                countZero += 1;
                st.pop();
            }
            else
            {
                break;
            }
        }
        // cout << countZero << endl;
        if (st.empty())
        {
            st.push(1);
            while (countZero--)
            {
                st.push(0);
            }
        }
        else
        {
            int v = st.top() + 1;
            st.pop();
            st.push(v);
            while (countZero--)
            {
                st.push(0);
            }
        }
        // while (!st.empty()) {
        //     cout << st.top() << " ";
        //     st.pop();
        // }
        v.clear();
        while (!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};