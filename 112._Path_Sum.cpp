// https://leetcode.com/problems/path-sum/description/

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

// I tried a solution. and it worked! But I have to analyze the problem again.
class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
            return false;
        else if (root->left == NULL & root->right == NULL &
                 root->val == targetSum)
            return true;
        else if (root->left == NULL & root->right == NULL &
                 root->val != targetSum)
            return false;
        targetSum = targetSum - root->val;
        bool left = hasPathSum(root->left, targetSum);
        bool right = hasPathSum(root->right, targetSum);
        return left || right;
    }
};