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
    vector<int>v;
    void solve(TreeNode* root){
        if(!root)return ;
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        solve(root);
      // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
      //   cout<<endl;
        int i=0,j=v.size()-1;
        while(i<j){
            if(v[i]+v[j]==k)return true;
            else if(v[i]+v[j]>k)j--;
            else i++;
        }
        return 0;
    }
};