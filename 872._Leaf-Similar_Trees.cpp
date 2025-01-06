// https://leetcode.com/problems/leaf-similar-trees/description/

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
vector<int> Leafs;
vector<int> findLeaf(TreeNode *root)
{
    if (root == NULL)
        return Leafs;
    if (root->left == NULL & root->right == NULL)
        Leafs.push_back(root->val);
    findLeaf(root->left);
    findLeaf(root->right);
    return Leafs;
}

// vector<int> findLeafNodes(TreeNode* root) {
//     vector<int> L;
//     queue<TreeNode*> q;
//     if (root)
//         q.push(root);

//     while (!q.empty()) {
//         TreeNode* parent = q.front();
//         q.pop();

//         if (parent->left == NULL && parent->right == NULL)
//             L.push_back(parent->val);

//         if (parent->left)
//             q.push(parent->left);
//         if (parent->right)
//             q.push(parent->right);
//     }
//     return L;
// }
class Solution
{
public:
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        // vector<int> L1 = findLeafNodes(root1);
        // vector<int> L2 = findLeafNodes(root2);
        Leafs.clear();
        vector<int> L1 = findLeaf(root1);
        Leafs.clear();
        vector<int> L2 = findLeaf(root2);

        // check output:
        for (auto i : L1)
            cout << i << " ";
        cout << endl;
        for (auto i : L2)
            cout << i << " ";

        if (L1 == L2)
            return true;
        else
            return false;
    }
};