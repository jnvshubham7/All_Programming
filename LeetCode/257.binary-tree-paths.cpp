/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> ans;
        if(root==NULL)
            return ans;

        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(to_string(root->val));
            return ans;
        }

        vector<string> left = binaryTreePaths(root->left);
        vector<string> right = binaryTreePaths(root->right);

        for(int i=0; i<left.size(); i++)
        {
            ans.push_back(to_string(root->val) + "->" + left[i]);
        }

        for(int i=0; i<right.size(); i++)
        {
            ans.push_back(to_string(root->val) + "->" + right[i]);
        }

        return ans;
        
    }
};
// @lc code=end

