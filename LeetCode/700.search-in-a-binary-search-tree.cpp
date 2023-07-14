/*
 * @lc app=leetcode id=700 lang=cpp
 *
 * [700] Search in a Binary Search Tree
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
    TreeNode* searchBST(TreeNode* root, int val) {

        if(root == nullptr) return root;

        //iterative

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            TreeNode* curr = q.front();

            q.pop();

            if(curr->val == val) return curr;

            if(curr->left != nullptr) q.push(curr->left);

            if(curr->right != nullptr) q.push(curr->right);
        }

        return nullptr;

    
        
    }
};
// @lc code=end

