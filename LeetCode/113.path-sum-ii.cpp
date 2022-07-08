/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
     vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        dfs(root, targetSum, 0, {});
        return ans;
        
    }

    void dfs(TreeNode* root, int targetSum, int currSum, vector<int> path) {
        if (!root) return;
        currSum += root->val;
        path.push_back(root->val);
        if (!root->left && !root->right) {
            if (currSum == targetSum) {
                ans.push_back(path);
            }
        }
        dfs(root->left, targetSum, currSum, path);
        dfs(root->right, targetSum, currSum, path);
       
    }






};
// @lc code=end

