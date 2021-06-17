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
    int tot=0;
    int solve(TreeNode * root){
        if(!root) return 0;
        int a=solve(root->left);
        int b=solve(root->right);
        int l=0,r=0;
         if (root->left != NULL && root->left->val == root->val) {
            l += a + 1;
        }
        if (root->right != NULL && root->right->val == root->val) {
           r += b + 1;
        }
        tot=max(tot,l+r);
        return max(l,r);
    }
    int longestUnivaluePath(TreeNode* root) {
        int s=solve(root);
        return tot;
    }
};