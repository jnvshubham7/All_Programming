/*
 * @lc app=leetcode id=662 lang=cpp
 *
 * [662] Maximum Width of Binary Tree
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
   
    
    int widthOfBinaryTree(TreeNode* root) {

        if(root == NULL)
        {
            return 0;
        }

        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        int ans = 0;

        while(!q.empty())
        {
            int size = q.size();
            int start = q.front().second;
            int end = q.back().second;

            ans = max(ans, end - start + 1);

            for(int i = 0; i < size; i++)
            {
                pair<TreeNode*, int> temp = q.front();
                q.pop();

                int idx = temp.second - start;

                if(temp.first->left)
                {
                    q.push({temp.first->left, 2 * idx + 1});
                }

                if(temp.first->right)
                {
                    q.push({temp.first->right, 2 * idx + 2});
                }
            }
        }

        return ans; 
        

       
    }

};




// @lc code=end

