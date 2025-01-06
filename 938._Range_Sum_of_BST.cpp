// https://leetcode.com/problems/range-sum-of-bst/description/

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
int sum = 0;
int rangeSumBST2(TreeNode *root, int low, int high)
{
    if (root == NULL)
        return 0;
    if (root->val >= low && root->val <= high)
        sum += root->val;
    rangeSumBST2(root->left, low, high);
    rangeSumBST2(root->right, low, high);
    return sum;
}
class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        sum = 0;
        int result = rangeSumBST2(root, low, high);
        return result;
    }
};