// https://leetcode.com/problems/univalued-binary-tree/description//

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
    bool isUnivalTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);

        bool flag = true;
        int value = root->val;
        while (!q.empty())
        {
            TreeNode *parent = q.front();
            q.pop();

            if (value != parent->val)
                flag = false;

            if (parent->left)
                q.push(parent->left);
            if (parent->right)
                q.push(parent->right);
        }
        return flag;
    }
};