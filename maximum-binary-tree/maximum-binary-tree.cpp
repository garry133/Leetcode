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
    int max(vector<int>& nums, int l, int r) {
        int max_i = l;
        for (int i = l; i < r; i++) {
            if (nums[max_i] < nums[i])
                max_i = i;
        }
        return max_i;
    }
    TreeNode* solve(vector<int>& nums,int l,int r){
        if (l == r)return NULL;
        int max_i = max(nums, l, r);
        TreeNode* root = new TreeNode(nums[max_i]);
        root->left = solve(nums, l, max_i);
        root->right = solve(nums, max_i + 1, r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
         return solve(nums, 0, nums.size());
    }
};