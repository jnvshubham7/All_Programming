/*
 * @lc app=leetcode id=617 lang=cpp
 *
 * [617] Merge Two Binary Trees
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

        if(t1==NULL && t2==NULL)
            return NULL;

        if(t1==NULL)
            return t2;

        if(t2==NULL)
            return t1;

        TreeNode* root = new TreeNode(t1->val + t2->val);

        root->left = mergeTrees(t1->left, t2->left);

        root->right = mergeTrees(t1->right, t2->right);

        return root;
    }

   
};
// @lc code=end

