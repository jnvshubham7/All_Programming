/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
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

          int minDiff=INT_MAX;
     void compareWithAllNodes(TreeNode* node, TreeNode* other) {
        if (other == nullptr || node == nullptr)
            return;

        int diff = abs(node->val - other->val);
        if (diff < minDiff)
            minDiff = diff;

        // Continue comparing the current node with other nodes
        compareWithAllNodes(other, other->left);
        compareWithAllNodes(other, other->right);
    }


    int getMinimumDifference(TreeNode* root) {


        if(root==nullptr)
        return 0;

        compareWithAllNodes(root,root->left);
        compareWithAllNodes(root,root->right);

        return minDiff;
    }

};
// @lc code=end

