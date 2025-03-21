// https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/description/?envType=daily-question&envId=2025-03-21
// https://www.youtube.com/watch?v=4Tixc5mU-Pk&ab_channel=codestorywithMIK
// Just Added 2115. DUA

class Solution
{
public:
    vector<string> findAllRecipes(vector<string> &recipes, vector<vector<string>> &ingredients, vector<string> &supplies)
    {
        int n = recipes.size();
        unordered_set<string> st(begin(supplies), end(supplies));

        // adj
        unordered_map<string, vector<int>> adj; // ing ---> recipe

        vector<int> indegree(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (string &ing : ingredients[i])
            {
                if (!st.count(ing))
                {
                    adj[ing].push_back(i);
                    indegree[i]++;
                }
            }
        }

        queue<int> que;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                que.push(i);
            }
        }

        vector<string> result;
        while (!que.empty())
        {
            int i = que.front();
            que.pop();
            string recipe = recipes[i];
            result.push_back(recipe);

            for (int &idx : adj[recipe])
            {
                indegree[idx]--;
                if (indegree[idx] == 0)
                {
                    que.push(idx);
                }
            }
        }

        return result;
    }
};