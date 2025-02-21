// https://leetcode.com/problems/find-unique-binary-string/description/
// Approach 3 of: https://www.youtube.com/watch?v=3y-m_hZsHuk&ab_channel=Techdose

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
class FindElements
{
    unordered_set<int> node_values;
    void recoverBinaryTree(TreeNode *parent, int value)
    {
        if (parent == NULL)
            return;
        node_values.insert(value);
        recoverBinaryTree(parent->left, 2 * value + 1);
        recoverBinaryTree(parent->right, 2 * value + 2);
    }

public:
    FindElements(TreeNode *root)
    {
        node_values.insert(0);
        recoverBinaryTree(root->left, 1);
        recoverBinaryTree(root->right, 2);
    }

    bool find(int target) { return node_values.count(target); }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
