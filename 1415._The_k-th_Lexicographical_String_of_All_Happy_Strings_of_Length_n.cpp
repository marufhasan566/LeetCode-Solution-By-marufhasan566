// https: // leetcode.com/problems/construct-smallest-number-from-di-string/description/?envType=daily-question&envId=2025-02-18
// Solution taken from: https://www.youtube.com/watch?v=yyqT5310oJY&ab_channel=Techdose
// Did I understand ? No

class Solution
{
public:
    string getHappyString(int n, int k)
    {
        vector<string> size_n;
        queue<string> q;

        q.push("a");
        q.push("b");
        q.push("c");

        while (!q.empty())
        {
            string curr = q.front();
            q.pop();

            if (curr.size() == n)
            {
                size_n.push_back(curr);
                continue;
            }

            string first = curr;
            string second = curr;

            if (curr.back() == 'a')
            {
                first.push_back('b');
                second.push_back('c');
            }
            else if (curr.back() == 'b')
            {
                first.push_back('a');
                second.push_back('c');
            }
            else
            {
                first.push_back('a');
                second.push_back('b');
            }

            if (size_n.size() >= k)
                break;

            q.push(first);
            q.push(second);
        }
        if (size_n.size() < k)
            return "";
        return size_n[k - 1];
    }
};