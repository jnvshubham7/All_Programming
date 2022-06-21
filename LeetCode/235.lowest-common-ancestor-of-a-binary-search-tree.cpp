/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

     
    //  bool solve(TreeNode* root, int x, vector<int>& v)
    //  {
    //     if(root==NULL)
    //     false;

    //     v.push_back(root->val);

    //    // cout<<root->val;

    //     if(root->val!=x)
    //     return false;

    //     if(solve(root->left,x,v) || solve(root->right,x,v))
    //     return true;

    //     v.pop_back();
    //     return false;

    //  }











    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

       if(root==NULL || root==p || root==q)
       {
        return root;
       }

       TreeNode* left=lowestCommonAncestor(root->left,p,q);
       TreeNode* right=lowestCommonAncestor(root->right,p,q);

       if(left==NULL)

       {
         //cout<<right->val<<" ";
         return right;

       }
       
       
       
       

      else if(right==NULL)
      {

       // cout<<left->val<<" ";
        return left;

      }
       
        
        

       

       else 
       {

        // cout<<root->val<<" ";
         return root;

       }
       
       
       


 
















    //     if(root==NULL || root==p || root==q)
    //     {
    //         return root;
    //     }



    //     int a=p->val;
    //     int b=q->val;

    //    // cout<<a<<" "<<b<<endl;

    //     //TreeNode* curr==NULL;

    //     vector<int> v1;

    //     vector<int> v2;

    //     for(int i=0;i<v1.size();i++)
    //     {
    //         cout<<v1.size()<<v1[i]<<" ";
    //     }

    //     solve(root,a,v1);
    //     solve(root,b,v2);

        // curr=p;
        // curr->val=p->val;

        // return curr;

      //  return root;


        


        
        
    }
};
// @lc code=end


