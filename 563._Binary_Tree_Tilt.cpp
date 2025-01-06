// https://leetcode.com/problems/binary-tree-tilt/

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
int tilt = 0;
int findSum(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int l = findSum(root->left);
    int r = findSum(root->right);
    tilt = tilt + abs(l - r);
    return root->val + l + r;
}
class Solution
{
public:
    int findTilt(TreeNode *root)
    {
        tilt = 0;
        findSum(root);
        return tilt;
    }
};