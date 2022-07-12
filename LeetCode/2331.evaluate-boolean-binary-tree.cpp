/*
 * @lc app=leetcode id=2331 lang=cpp
 *
 * [2331] Evaluate Boolean Binary Tree
 */

// @lc code=start
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
    bool evaluateTree(TreeNode* root) {

        return solve(root);
        
    }

    
    bool solve(TreeNode* root)
    {
        if(root == NULL)
            return true;
        if(root->left == NULL && root->right == NULL)
            return root->val == 1;
        if(root->val == 2)
            return solve(root->left) || solve(root->right);
        if(root->val == 3)
            return solve(root->left) && solve(root->right);
        return false;
    }
};
// @lc code=end

