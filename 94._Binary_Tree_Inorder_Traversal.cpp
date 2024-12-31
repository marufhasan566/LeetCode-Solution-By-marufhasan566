// https://leetcode.com/problems/binary-tree-inorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
vector<int> v;
void inOrderTraverse(TreeNode *root)
{
    if (root == NULL)
        return;
    inOrderTraverse(root->left);
    v.push_back(root->val);
    inOrderTraverse(root->right);
}
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        v.clear();
        inOrderTraverse(root);
        return v;
    }
};