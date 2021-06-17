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
    string ans="";
     void dfs(TreeNode* root,string s) {
        if (!root) return;
        s+=('a' + root->val);

        if (!root->left&& !root->right) {
            reverse(s.begin(),s.end());
            if(ans=="")
                ans=s;
            if (s<ans)
                ans = s;
        }

        dfs(root->left, s);
        dfs(root->right, s);
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root,"");
        return ans;
    }
};