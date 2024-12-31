// https://leetcode.com/problems/search-in-a-binary-search-tree/description/

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
TreeNode *newRoot;
class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        newRoot = NULL;
        queue<TreeNode *> q;
        if (root)
            q.push(root);

        while (!q.empty())
        {
            TreeNode *parent = q.front();
            q.pop();

            if (parent->val == val)
            {
                newRoot = parent;
                break;
            }

            if (parent->left)
                q.push(parent->left);
            if (parent->right)
                q.push(parent->right);
        }
        return newRoot;
    }
};
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if (root == NULL)
//             return NULL;
//         if (root->val == val)
//             return root;
//         TreeNode* leftRoot = searchBST(root->left, val);
//         TreeNode* rightRoot = searchBST(root->right, val);
//         if (leftRoot)
//             return leftRoot;
//         else if (rightRoot)
//             return rightRoot;
//         else
//             return NULL;
//     }
// };
