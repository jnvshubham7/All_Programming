/*
 * @lc app=leetcode id=654 lang=cpp
 *
 * [654] Maximum Binary Tree
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
   
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

      return solve(nums,0,nums.size()-1);
        
    }

    TreeNode* solve(vector<int>& nums,int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        
        int max_index=start;
        for(int i=start;i<=end;i++)
        {
            if(nums[i]>nums[max_index])
            {
                max_index=i;
            }
        }
        
        TreeNode* root=new TreeNode(nums[max_index]);
        root->left=solve(nums,start,max_index-1);
        root->right=solve(nums,max_index+1,end);
        
        return root;
    }
};
// @lc code=end

