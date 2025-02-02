// https://leetcode.com/problems/average-of-levels-in-binary-tree/description/?envType=study-plan-v2&envId=top-interview-150
// Help from Youtube: https://www.youtube.com/watch?v=115txA-rS5s&ab_channel=NikhilLohia
// Help2 from Youtube: https://www.youtube.com/watch?v=UnTAVRofiVI&t=1s&ab_channel=CodewithAlisha

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
public:
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> res;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            double sum = 0;

            for (int i = 0; i < n; i++)
            {
                TreeNode *Node = q.front();

                if (Node->left)
                    q.push(Node->left);
                if (Node->right)
                    q.push(Node->right);
                sum += Node->val;

                q.pop();
            }
            res.push_back(sum / n);
        }
        return res;
    }
};