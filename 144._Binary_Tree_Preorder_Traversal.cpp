// https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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
void preOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    v.push_back(root->val);
    preOrder(root->left);
    preOrder(root->right);
}
class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        v.clear();
        preOrder(root);
        return v;
    }
};