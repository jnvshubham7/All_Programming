/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> v;
        if(root==NULL)
        {
             return v;

        }
       

        queue<TreeNode*> q;
        q.push(root);
        bool order=true;
        while(!q.empty())
        {
            int n=q.size();

            vector<int> temp(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* curr =q.front();
                q.pop();
                

                int index;
                if(order)
                {
                    index=i;
                }
                else {
                    index=n-1-i;
                }

                temp[index]=curr->val;
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }



            }

            order=!order;
            v.push_back(temp);
        }
         
        return v;

        
    }
};

// @lc code=end

