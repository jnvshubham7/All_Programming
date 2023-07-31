/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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


    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int n = nums.size();

        if(n == 0) return nullptr;

        return helper(nums, 0, n-1);

       





     
    }

    TreeNode* helper(vector<int>& nums, int start, int end)
    {
        if(start > end) return nullptr;

        int mid = start + (end - start)/2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = helper(nums, start, mid-1);

        root->right = helper(nums, mid+1, end);

        return root;
    }


};
// @lc code=end

