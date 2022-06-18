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

// int height(TreeNode* root)
// {
//     if(root==NULL)
//     return 0;

//     int l=height(root->left);
//     int r=height(root->right);

//     return 1+max(l,r);
// }

int diameter=0;
int solve(TreeNode* root)
{
    if(root==NULL)
    return 0;



    int left=solve(root->left);
    int right=solve(root->right);
    diameter=max(diameter,left+right);

return 1+max(left,right);


    
    

}

 int diameterOfBinaryTree(TreeNode* root) {

   solve(root);

   return diameter;


    }

};
// @lc code=end

