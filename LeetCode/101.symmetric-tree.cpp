/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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

bool solve(TreeNode* left,TreeNode* right)
{
    if(left==NULL && right==NULL)
    return true;

     if(left==NULL || right==NULL)
    return false;

    if(left->val!=right->val)
    return false;

    return solve(left->left,right->right) && solve(left->right,right->left);
}
    bool isSymmetric(TreeNode* root) {

        if(root==NULL)
        return true;

        return solve(root->left,root->right);
        
    }
};
// @lc code=end

