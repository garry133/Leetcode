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
// class Solution {
// public:
//     int ans=0;
//     int solve(TreeNode*root,int tot){
//         if(root==NULL)return 0;
//         tot+=root->val;
//         solve(root->left,tot);
//         solve(root->right,tot);
//         return tot;
//      }
//     int findTilt(TreeNode* root) {
//         if(!root) return 0;
//         int a=solve(root->left,0);
//         int b=solve(root->right,0);
//         cout<<a<<" "<<b<<" "<<abs(a-b)<<endl;
//         ans+=abs(a-b);
//         findTilt(root->left);
//         findTilt(root->right);
//         return ans;
//     }
// };

class Solution {
public:
    int ans=0;
    int solve(TreeNode*root){
        if(root==NULL)return 0;
        int a=solve(root->left);
        int b=solve(root->right);
        ans+=abs(a-b);
        return a+b+root->val;
     }
    int findTilt(TreeNode* root) {
       int z= solve(root);
        return ans;
    }
};

// class Solution {
// public:
//     int res = 0;
//     int dfs(TreeNode *root) {
// 		// computing local left and right sub sums
//         int left = (root->left ? dfs(root->left) : 0), right = (root->right ? dfs(root->right) : 0);
//         // count the current tilt
// 		res += abs(left - right);
// 		// return the sum so far
//         return left + right + root->val;
//     }
//     int findTilt(TreeNode* root) {
//         if (root) dfs(root);
//         return res;
//     }
// };