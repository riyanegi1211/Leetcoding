/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int depthLeft=minDepth(root->left);
        int depthRight=minDepth(root->right);
        if(depthLeft==0||depthRight==0)
        {
            return 1+depthLeft+depthRight;
        }
        else
        return min(depthRight,depthLeft)+1;
    }
};