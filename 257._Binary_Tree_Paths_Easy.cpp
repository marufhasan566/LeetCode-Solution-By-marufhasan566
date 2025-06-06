// https://leetcode.com/problems/binary-tree-paths/submissions/1655389214/
// https://www.youtube.com/watch?v=gSFcPOPyq-Y&ab_channel=codeExplainer

class Solution
{
public:
    string convert(vector<int> &path)
    {
        string ans = "";
        int n = path.size();
        for (int i = 0; i < n - 1; i++)
        {
            ans += to_string(path[i]);
            ans.push_back('-');
            ans.push_back('>');
        }
        ans += to_string(path[n - 1]);
        return ans;
    }

    void solve(TreeNode *root, vector<int> &path, vector<string> &ans)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            path.push_back(root->val);
            ans.push_back(convert(path));
            path.pop_back();
            return;
        }
        path.push_back(root->val);
        solve(root->left, path, ans);
        solve(root->right, path, ans);
        path.pop_back();
        return;
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
        vector<int> path;
        solve(root, path, ans);
        return ans;
    }
};