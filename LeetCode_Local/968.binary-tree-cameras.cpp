/*
 * @lc app=leetcode id=968 lang=cpp
 *
 * [968] Binary Tree Cameras
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

int MONITERED=-1,IS_CAMERA=0,NEED_CAMERA=1;
int count=0;

int solve(TreeNode* root)
{
    if(root==NULL)
    return MONITERED;

    int left=solve(root->left);
    int right=solve(root->right);

    if(left==NEED_CAMERA || right==NEED_CAMERA)
    {
        count++;
        return IS_CAMERA;
    }

    else if(left==IS_CAMERA || right==IS_CAMERA)
    return MONITERED;

    return NEED_CAMERA;




}




    int minCameraCover(TreeNode* root) {

       if(solve(root)==NEED_CAMERA)
       return count+1;

       return count;


        
    }
};
// @lc code=end

