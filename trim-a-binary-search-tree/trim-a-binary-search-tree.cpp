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
    TreeNode* trimBST(TreeNode* root, int lo, int hi) {
         if(!root)return NULL;
        // cout<<root->val<<endl;
    if(root->val<lo){
        // TreeNode* temp=root->right;
        // delete root;
         // cout<<root->val<<"3"<<endl;
        return trimBST(root->right,lo,hi);
         // cout<<root->val<<"4"<<endl;
    }
    else if(root->val>hi){
        // TreeNode* temp=root->left;
        // delete root;
         // cout<<root->val<<"11"<<endl;
        return trimBST(root->left,lo,hi);
         // cout<<root->val<<"2"<<endl;
    }
        // cout<<root->val<<"p"<<endl;
    root->left = trimBST(root->left,lo,hi);
        // cout<<root->val<<"o"<<endl;
    root->right = trimBST(root->right,lo,hi);
        // cout<<root->val<<"h"<<endl;
    return root;
    }
};