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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)   return 0;
		int ans=1;
		queue<pair<TreeNode*,int>> Q;
		Q.push({root,0});
		while(!Q.empty())
		{
			int n = Q.size(),st,end;
			int mini = Q.front().second;
			for(int i=0;i<n;i++)
			{
				TreeNode *node = Q.front().first;
				int ind = Q.front().second-mini;
				Q.pop();
				if(!i)    
                    st = ind;
				if(i==n-1)      
                    end = ind;
				if(node->left)     
                    Q.push({node->left, (long)2*ind+1});
				if(node->right)     
                    Q.push({node->right, (long)2*ind+2});
			}
			ans = max(ans, end-st+1);
		}
		return ans;
	}
};