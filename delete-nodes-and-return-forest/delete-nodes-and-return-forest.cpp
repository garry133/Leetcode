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
    vector<TreeNode*>ans;
    void solve(TreeNode* &root,vector<int>&t){
        if(!root)return;
        solve(root->left,t);
        solve(root->right,t);
        for(int i=0;i<t.size();i++){
          if(!root)return;
          if(root->val==t[i]){
              if(root->left)
              ans.push_back(root->left);
              if(root->right)
              ans.push_back(root->right);
              root=NULL;
          }  
        }
        
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& t) {
        solve(root,t);
        if(root)
            ans.push_back(root);
        return ans;
    }
};