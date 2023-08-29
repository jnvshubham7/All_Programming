/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    int sumNumbers(TreeNode* root) {

       vector<string> sum;

         string s="";

        rec(root,sum,s);

        int ans=0;

        for(int i=0;i<sum.size();i++)
        {
            ans+=stoi(sum[i]);
        }

        return ans;







        
    }


    void rec(TreeNode* root,vector<string> &sum,string s)
    {
        if(root==NULL)
        {
            return;
        }

        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val);
            sum.push_back(s);
            return;
        }

        s+=to_string(root->val);

        rec(root->left,sum,s);
        rec(root->right,sum,s);

    }





};
// @lc code=end

