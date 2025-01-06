// https://leetcode.com/problems/increasing-order-search-tree/description/

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
queue<int> qq;
void inOrderTraverse(TreeNode *root)
{
    if (root == NULL)
        return;
    inOrderTraverse(root->left);
    cout << root->val << " ";
    qq.push(root->val);
    inOrderTraverse(root->right);
}
TreeNode *inputTree()
{
    TreeNode *root = new TreeNode(qq.front());
    qq.pop();

    stack<TreeNode *> st;
    st.push(root);

    while (!qq.empty())
    {
        // 1st step:
        TreeNode *parentNode = st.top();

        // 2nd step:
        TreeNode *newRight = new TreeNode(qq.front());
        parentNode->right = newRight;
        qq.pop();

        // 3rd step:
        if (parentNode->right)
            st.push(parentNode->right);
    }
    return root;
}

class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root)
    {
        inOrderTraverse(root);
        cout << endl;
        TreeNode *newRoot = inputTree();
        return newRoot;
    }
};