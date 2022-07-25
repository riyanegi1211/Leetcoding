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
    void inorder(vector<int>&v,TreeNode* root)
    {
        if(!root)
            return;
        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(ans,root);
        return ans;
    }
};