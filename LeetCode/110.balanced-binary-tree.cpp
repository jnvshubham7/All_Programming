/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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

int height(TreeNode* root)
{
    if(root==NULL)
    return 0;
    int l=height(root->left);
    int r=height(root->right);

    return 1+max(l,r);

}

bool dfs(TreeNode* root)
{
    if(root==NULL)
    return true;


    int l_height=height(root->left);
    int r_height=height(root->right);

    if(abs(l_height-r_height)>1)
    return false;

    bool l=dfs(root->left);
    bool r=dfs(root->right);

    if(!l || !r)
    return false;

    return true;




}


    bool isBalanced(TreeNode* root) {

        return dfs(root);

        
    }
};
// @lc code=end

