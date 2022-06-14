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
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

bool dfs(TreeNode* root)
{
    if(root==NULL)
    {
        return true;
    }

    bool left=dfs(root->left);
    bool right=dfs(root->right);

    //check height which is not more than 1
    if(abs(height(root->left)-height(root->right))>1)
    {
        return false;
    }

    return left&&right;







   
//     if(root==NULL)
//     return true;

//    if(root->left!=NULL && root->right)
//         {
//             return true;
//         }

//     if(root->left)
//     dfs(root->left,level+1);

//     if(root->right)
//     dfs(root->right,level+1);

//     return false;

}


    bool isBalanced(TreeNode* root) {

        return dfs(root);


        // if(root==NULL)
        // return true;

        // if(root->left!=NULL && root->right)
        // {
        //     return true;
        // }

        // return false;

        


        
    }
};
// @lc code=end

