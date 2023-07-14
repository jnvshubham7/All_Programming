/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    
    vector<int> postorderTraversal(TreeNode* root) {

        
        vector<int> v;
        if(root==NULL)
        return v;

        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* curr=st.top();
            st.pop();

            v.push_back(curr->val);
            if(curr->left)
            {
                st.push(curr->left);
            }

            if(curr->right)
            {
                st.push(curr->right);
            }
        }
        reverse(v.begin(),v.end());

        return v;
        
    }
};
// @lc code=end









#include<bits/stdc++.h>
using namespace std;
#define ll long long


struct TreeNode{
        int val;
        TreeNode* left;
        TreeNode* right;

       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

    };



    void solve(TreeNode* root)
    {
        if(root==NULL)
        return;
       
      
        solve(root->left);
        solve(root->right);
         cout<<root->val<<" ";
        
    }

 
    

int main(){

   //take input from user and create a tree
    //Input: root = [1,null,2,3]

    TreeNode* root = new TreeNode(1);
    root->left = NULL;
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

   solve(root);

    return 0;
}