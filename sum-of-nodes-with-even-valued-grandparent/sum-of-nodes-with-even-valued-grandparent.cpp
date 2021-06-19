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
    int sum = 0;
    int sumEvenGrandparent(TreeNode *root) {
        dfs(root, NULL, NULL);
        return sum;
    }

    void dfs(TreeNode *root, TreeNode *p, TreeNode *gp) {
        if (!root) return; // base case 
        if (gp && gp->val % 2 == 0) {
            sum += root->val;
        }
        dfs(root->left, root, p);// ( newChild, parent, GrandParent)
        dfs(root->right, root, p);
    }
};