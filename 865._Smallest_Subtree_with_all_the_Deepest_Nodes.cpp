// https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/description/
// https://www.youtube.com/watch?v=vXTlRSr-zfY&t=534s&ab_channel=Techdose

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
#define NodeHeight pair<TreeNode *, int>

    NodeHeight findLCA(TreeNode *current)
    {
        if (!current)
            return make_pair(nullptr, 0);

        NodeHeight left = findLCA(current->left);
        NodeHeight right = findLCA(current->right);

        if (left.second == right.second)
            return make_pair(current, 1 + left.second);
        else if (left.second > right.second)
            return make_pair(left.first, 1 + left.second);
        return make_pair(right.first, 1 + right.second);
    }

public:
    TreeNode *subtreeWithAllDeepest(TreeNode *root)
    {
        NodeHeight result = findLCA(root);
        return result.first;
    }
};
