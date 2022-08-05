/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
    void flatten(TreeNode* root) {

        if(root==NULL)
        return ;

        if(root->left==NULL && root->right==NULL)
        {
            return ;
        }

        if(root->left!=NULL)
        {
            flatten(root->left);

            TreeNode* temp=root->right;
            root->right=root->left;
            root->left=NULL;
            
            TreeNode* temp2=root->right;
            //humne jo abhi left wala part ko root->right me dala hai 

            while(temp2->right!=NULL)
            {
                temp2=temp2->right;
                //usi root->right ke last tak pahuch rahe hai tako purana wala right ko add kar sake 
            
            }
            temp2->right=temp;

            //paurana wala right ko add akar rahe hain 





           
        }

        flatten(root->right);
        

       



        

      
    }


};
// @lc code=end

