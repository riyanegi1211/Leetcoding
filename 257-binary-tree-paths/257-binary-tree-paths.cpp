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
    void solve(TreeNode *root,vector<string>&ans,string s)
    {
        if(root==NULL)
            return;
        s+=to_string(root->val);
        if(root->left!=NULL || root->right!=NULL)
            s+="->";
        solve(root->left,ans,s);
        solve(root->right,ans,s);
        if(root->left==NULL && root->right==NULL)
            ans.push_back(s);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s;
        solve(root,ans,s);
        return ans;
    }
};