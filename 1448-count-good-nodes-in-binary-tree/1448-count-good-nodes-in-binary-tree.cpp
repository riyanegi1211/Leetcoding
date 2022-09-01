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
    int ans=0;
    void preorder(TreeNode* root,int maxi)
    {
        if(!root)
            return;
        if(root->val>=maxi)
        {
            ans++;
            maxi=root->val;
        }
        preorder(root->left,maxi);
        preorder(root->right,maxi);
    }
public:
    int goodNodes(TreeNode* root) {
        preorder(root,INT_MIN);
        return ans;
    }
};

