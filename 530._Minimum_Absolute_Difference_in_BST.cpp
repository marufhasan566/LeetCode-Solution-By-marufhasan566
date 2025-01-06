// https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
vector<int> v;
void getNodes(TreeNode *root)
{
    queue<TreeNode *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        TreeNode *parent = q.front();
        q.pop();

        v.push_back(parent->val);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}
class Solution
{
public:
    int getMinimumDifference(TreeNode *root)
    {
        v.clear();
        getNodes(root);
        // sort(v.begin(), v.end());
        // check
        // for (auto i : v)
        //     cout << i << " ";
        int minimum = INT_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            // cout<<i<<" ";
            for (int j = i + 1; j < v.size(); j++)
            {
                int ans = abs(v[i] - v[j]);
                minimum = min(ans, minimum);
            }
        }
        // cout << endl;
        return minimum;
    }
};