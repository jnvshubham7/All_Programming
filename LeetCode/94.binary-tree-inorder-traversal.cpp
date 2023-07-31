/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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

    
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);
            curr = curr->right;
        }

        return ans;

      
        
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
         cout<<root->val<<" ";
        solve(root->right);
        
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