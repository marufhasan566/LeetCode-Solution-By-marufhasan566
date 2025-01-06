// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/

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

TreeNode *convertArrayIntoBST(vector<int> v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    TreeNode *root = new TreeNode(v[mid]);
    TreeNode *leftRoot = convertArrayIntoBST(v, l, mid - 1);
    TreeNode *rightRoot = convertArrayIntoBST(v, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root = convertArrayIntoBST(nums, 0, nums.size() - 1);
        return root;
    }
};