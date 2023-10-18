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

    bool isSymmetric(TreeNode* root) {

        if(root == NULL)
        {
            return true;
        }

        return solve(root->left, root->right);
        
       
        
    }

    bool solve(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL)
        {
            return true;
        }

        if(p == NULL || q == NULL)
        {
            return false;
        }

        if(p->val != q->val)
        {
            return false;
        }

        return solve(p->left, q->right) && solve(p->right, q->left);
    }

   
};
// @lc code=end

