// https://leetcode.com/problems/balanced-binary-tree/
// Help from YT:  https://www.youtube.com/watch?v=QfJsau0ItOY&ab_channel=NeetCode
// https://chatgpt.com/share/67acb4bf-c2f0-8004-b3f9-c19733ab0e51
//Revise this problem

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
/*
class Solution {
    int depth(TreeNode* root) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        int left = depth(root->left);
        int right = depth(root->right);
        return max(left, right) + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        int dLeft = depth(root->left);
        int dRight = depth(root->right);
        cout << dLeft << " " << dRight << endl;
        if (abs(dLeft - dRight) <= 1)
            return true;
        else
            return false;
    }
};
*/

class Solution
{
public:
    pair<bool, int> dfs(TreeNode *root)
    {
        if (!root)
        {
            return {true, 0};
        }
        auto left = dfs(root->left);
        auto right = dfs(root->right);

        bool balanced = left.first && right.first && abs(left.second - right.second) <= 1;
        return {balanced, 1 + max(left.second, right.second)};
    }

    bool isBalanced(TreeNode *root)
    {
        return dfs(root).first;
    }
};
