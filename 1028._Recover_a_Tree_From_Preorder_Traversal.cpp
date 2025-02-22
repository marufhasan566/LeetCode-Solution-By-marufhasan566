// https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/?envType=daily-question&envId=2025-02-22
// Taken from:  https://www.youtube.com/watch?v=WN0quIK89F0&ab_channel=ChaiaurCode
// This is a HARD leveled question. Please revise this problem

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
    int n;

    TreeNode *solve(string &s, int &i, int depth)
    {
        if (i >= n)
            return NULL;

        int j = i;
        while (j < n && s[j] == '-')
        {
            j++;
        }
        int dash = j - i;
        if (dash != depth)
        {
            return NULL;
        }

        // i =  j;
        i += dash;

        int num = 0;
        while (i < n && isdigit(s[i]))
        {
            num = (num * 10) + (s[i] - '0');
            i++;
        }

        TreeNode *root = new TreeNode(num);
        root->left = solve(s, i, depth + 1);
        root->right = solve(s, i, depth + 1);

        return root;
    }

public:
    TreeNode *recoverFromPreorder(string s)
    {
        n = s.length();
        int i = 0;
        int depth = 0;

        return solve(s, i, depth);
    }
};