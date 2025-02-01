// https://leetcode.com/problems/symmetric-tree/?envType=study-plan-v2&envId=top-interview-150
// I don't know how this problem got accepted. I definitely need to revise this one
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

vector<int> l;
vector<int> r;
void levelOrderFromLeft(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *parent = q.front();
        q.pop();

        l.push_back(parent->val);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
        else
            l.push_back(-111);
    }
    cout << endl;
}
void levelOrderFromRight(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *parent = q.front();
        q.pop();

        r.push_back(parent->val);

        if (parent->right)
            q.push(parent->right);
        if (parent->left)
            q.push(parent->left);
        else
            r.push_back(-111);
    }
    cout << endl;
}
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        l.clear();
        r.clear();
        levelOrderFromLeft(root);
        levelOrderFromRight(root);
        for (int i : l)
            cout << i << " ";
        cout << "\n\n";
        for (int i : r)
            cout << i << " ";
        bool flag = true;
        int i = 0;
        while (i < l.size())
        {
            if (l[i] != r[i])
            {
                flag = false;
                break;
            }
            i++;
        }
        return flag;
    }
};