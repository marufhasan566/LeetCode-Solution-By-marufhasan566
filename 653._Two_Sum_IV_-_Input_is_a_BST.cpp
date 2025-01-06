// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

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
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* parent = q.front();
            q.pop();

            v.push_back(parent->val);

            if (parent->left)
                q.push(parent->left);
            if (parent->right)
                q.push(parent->right);
        }
        // check
        bool flag = false;
        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                if (v[i] + v[j] == k)
                    flag = true;
            }
        }
        return flag;
    }
};