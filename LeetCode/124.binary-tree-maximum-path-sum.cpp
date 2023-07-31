/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
int ans=INT_MIN;
int solve(TreeNode* root)
{
    if(root==NULL)
    return 0;

    int left=max(0,solve(root->left));
    int right=max(0,solve(root->right));
   

    ans=max(ans,left+right+root->val);

    return root->val+max(left,right);
}

    int maxPathSum(TreeNode* root) {

        solve(root);

        return ans;
        
    }
};
// @lc code=end

