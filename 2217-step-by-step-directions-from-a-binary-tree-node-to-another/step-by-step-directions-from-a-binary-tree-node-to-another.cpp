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
    bool find(TreeNode* n,int val,string &path){
        if(n->val==val)
            return true;
        if(n->left && find(n->left,val,path))
            path.push_back('L');
        else if(n->right && find(n->right,val,path))
            path.push_back('R');
        return (!path.empty());

    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string start, des;
        find(root,startValue,start);
        find(root,destValue,des);

        while(!start.empty() && !des.empty() && start.back()==des.back()){
            start.pop_back();
            des.pop_back();
        }
        return string(start.size(),'U')+ string(rbegin(des),rend(des));
    }
};