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
    vector<pair<int,int>>v;
    void solve(TreeNode* root){
        if(!root)return;
        v.push_back({root->val,root->val});
        solve(root->left);
        solve(root->right);
    }
    void sol(TreeNode* root,vector<pair<int,int>>&v){
        if(!root)return;
        for(int i=0;i<v.size();i++){
            if(v[i].second==root->val){
                root->val=v[v.size()-1].first-v[i].first+v[i].second;
                break;
            }
        }
        sol(root->left,v);
        sol(root->right,v);
    }
    TreeNode* convertBST(TreeNode* root) {
        solve(root);
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
            v[i].first+=v[i-1].first;
        sol(root,v); 
        return root;
    }
};