// https://leetcode.com/problems/count-complete-tree-nodes/description/

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
class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        int count = 0;
        queue<TreeNode *> q;
        if (root)
            q.push(root);

        while (!q.empty())
        {
            TreeNode *parent = q.front();
            q.pop();

            if (parent)
                count++;

            if (parent->left)
                q.push(parent->left);
            if (parent->right)
                q.push(parent->right);
        }
        return count;
    }
};