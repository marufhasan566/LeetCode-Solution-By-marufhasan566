// https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/description/?envType=daily-question&envId=2025-04-04
// https://www.youtube.com/watch?v=vXTlRSr-zfY&t=534s&ab_channel=Techdose

class Solution
{
#define NodeHeight pair<TreeNode *, int>

    NodeHeight findLCA(TreeNode *current)
    {
        if (!current)
            return make_pair(nullptr, 0);

        NodeHeight left = findLCA(current->left);
        NodeHeight right = findLCA(current->right);

        if (left.second == right.second)
            return make_pair(current, 1 + left.second);
        else if (left.second > right.second)
            return make_pair(left.first, 1 + left.second);
        return make_pair(right.first, 1 + right.second);
    }

public:
    TreeNode *lcaDeepestLeaves(TreeNode *root)
    {
        NodeHeight result = findLCA(root);
        return result.first;
    }
};