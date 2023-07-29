/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> numSet;
        return findTargetHelper(root, k, numSet);
    }
    
    bool findTargetHelper(TreeNode* root, int k, unordered_set<int>& numSet) {
        if (root == nullptr) {
            return false;
        }
        
        if (numSet.count(k - root->val) > 0) {
            return true;
        }
        
        numSet.insert(root->val);
        
        return findTargetHelper(root->left, k, numSet) || findTargetHelper(root->right, k, numSet);
    }
};

// @lc code=end

