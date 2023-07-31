/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(root==NULL)
        return false;

        if(isSameTree(root,subRoot))
        return true;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);




        
    }

    bool isSameTree(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL)
        return true;

        if(root==NULL || subRoot==NULL)
        return false;

        return (root->val==subRoot->val) && isSameTree(root->left,subRoot->left) && isSameTree(root->right,subRoot->right);
    }


};
// @lc code=end

