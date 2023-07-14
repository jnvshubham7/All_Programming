/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
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
    vector<double> averageOfLevels(TreeNode* root) {

         vector<double> v;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            double sum=0;
            int n=q.size();
           
            
            
            for(int i=0;i<n;i++)
            {
                 TreeNode* curr=q.front();
               q.pop();
                sum+= curr->val;
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
                
            }
          
            v.push_back(double(sum)/n);
           
            
        }
        
        return v;
        
    }
};
// @lc code=end

