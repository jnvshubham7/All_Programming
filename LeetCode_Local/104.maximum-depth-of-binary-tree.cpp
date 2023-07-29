/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
  
    int maxDepth(TreeNode* root) {

        int level = 0;

        if(root == NULL)
        {
            return level;
        }

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            level++;

            for(int i = 0; i < size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left)
                {
                    q.push(curr->left);
                }

                if(curr->right)
                {
                    q.push(curr->right);
                }
            }

            
        }

        return level;

        // if(root == NULL)
        // {
        //     return 0;
        // }

        // int left = maxDepth(root->left);
        // int right = maxDepth(root->right);

        // return max(left, right) + 1;

     
        
    }
};
// @lc code=end

