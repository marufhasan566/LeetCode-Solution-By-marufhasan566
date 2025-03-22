const int N = 1e2 + 1;
vector<int> adj_list[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    cout << "Visiting " << u << endl;
    for (int v : adj_list[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

class Solution
{

public:
    int countCompleteComponents(int n, vector<vector<int>> &edges)
    {
        for (int i = 0; i < edges.size(); i++)
        {
            // for (int j = 0; j < edges[i].size(); j++) {
            //     cout << edges[i][j] << " ";

            // }
            int u = edges[i][0];
            int v = edges[i][1];
            // cout << u << " " << v << endl;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }

        // check inputs
        for (int i = 0; i < n; i++)
        {
            cout << "List " << i << ": ";
            for (int j : adj_list[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
        dfs(0);
        // clearing data
        for (int i = 0; i < n; i++)
        {
            visited[i] = false;
        }
        return 0;
    }
};