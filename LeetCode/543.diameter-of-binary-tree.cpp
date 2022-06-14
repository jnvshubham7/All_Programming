/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
   
int height(TreeNode* root){
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}



    int diameterOfBinaryTree(TreeNode* root) {

if(root==NULL)
    return 0;


int l=height(root->left);
int r=height(root->right);


int ld=diameterOfBinaryTree(root->left);
int rd=diameterOfBinaryTree(root->right);   


return max(l+r,max(ld,rd));
    }

};
// @lc code=end

