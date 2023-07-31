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
    vector<vector<int>> pathSum(TreeNode* root, int ts) {


        if(root==NULL)
        {
            return ans;
        }

        vector<TreeNode*> path;

       func(root,ts,path);

        return ans;






        


    }

    void func(TreeNode* root,int ts,vector<TreeNode*> path)
    {
        if(root==NULL)
        {
            return;
        }

        path.push_back(root);

        if(root->left==NULL && root->right==NULL)
        {
            int sum=0;
            for(int i=0;i<path.size();i++)
            {
                sum+=path[i]->val;
            }

            if(sum==ts)
            {
                vector<int> temp;
                for(int i=0;i<path.size();i++)
                {
                    temp.push_back(path[i]->val);
                }

                ans.push_back(temp);
            }
        }

        func(root->left,ts,path);
        func(root->right,ts,path);

    }


    





};
// @lc code=end

