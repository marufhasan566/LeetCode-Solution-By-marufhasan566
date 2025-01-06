// https://leetcode.com/problems/same-tree/description/

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
vector<int> findNodes(TreeNode *root)
{
    vector<int> L;
    queue<TreeNode *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        TreeNode *parent = q.front();
        q.pop();

        L.push_back(parent->val);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
        else
            L.push_back(-1);
    }
    return L;
}
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> L1 = findNodes(p);
        vector<int> L2 = findNodes(q);

        // check output:
        for (auto i : L1)
            cout << i << " ";
        cout << endl;
        for (auto i : L2)
            cout << i << " ";

        if (L1 == L2)
            return true;
        else
            return false;
    }
};