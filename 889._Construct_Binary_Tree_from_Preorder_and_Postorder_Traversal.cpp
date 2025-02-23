// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/?envType=daily-question&envId=2025-02-23
// Help from YT: https://www.youtube.com/watch?v=B0aJLoblfHk&t=609s&ab_channel=Techdose
// Hard level question. Must revise

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
class Solution
{
    int pre_idx = 0;
    int post_idx = 0;

public:
    TreeNode *constructFromPrePost(vector<int> &preorder,
                                   vector<int> &postorder)
    {
        TreeNode *parent = new TreeNode(preorder[pre_idx]);
        pre_idx++;

        if (parent->val != postorder[post_idx])
            parent->left = constructFromPrePost(preorder, postorder);
        if (parent->val != postorder[post_idx])
            parent->right = constructFromPrePost(preorder, postorder);

        post_idx++;

        return parent;
    }
};