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

        return solve(nums,0,nums.size());
        
    }
    
    TreeNode* solve(vector<int>& nums, int start, int end)
    {
        if(start==end)
        {
            return NULL;
        }

        int mid= start + (end-start)/2;
        TreeNode* root =new TreeNode(nums[mid]);

       root->left= solve(nums,start,mid);
       root->right=solve(nums,mid+1, end);

       return root;
    }
};
// @lc code=end

