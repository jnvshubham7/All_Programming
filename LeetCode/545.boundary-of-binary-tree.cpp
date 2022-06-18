//https://www.lintcode.com/problem/878/



/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    vector<int> v;

    bool isLeaf(TreeNode* root)
    {
        if(!root->left && !root->right)
        {
            return true;
        }

    return false;
    }

      void addLeftBoundary(TreeNode* root){

          TreeNode* curr=root->left;

          while(curr)
          {
              if(!isLeaf(curr))
              v.push_back(curr->val);
              if(curr->left)
              curr=curr->left;
              else 
              curr=curr->right;
          }

      }

      void  addLeaves(TreeNode* root){
          if(isLeaf(root))
          {
           v.push_back(root->val);
          return;
          }
         

          if(root->left)
          addLeaves(root->left);
          if(root->right)
          addLeaves(root->right);

      }


      void  addRightBoundary(TreeNode* root){

          vector<int> temp;

          TreeNode* curr=root->right;

          while(curr)
          {
              if(!isLeaf(curr))
              temp.push_back(curr->val);

              if(curr->right)
              curr=curr->right;
              else 
              curr=curr->left;
          }

          reverse(temp.begin(),temp.end());

          for(int i=0;i<temp.size();i++)
          {
              v.push_back(temp[i]);
          }

      }


      
    vector<int> boundaryOfBinaryTree(TreeNode *root) {

        if(root==NULL)
        return v;

        if(!isLeaf(root))
        v.push_back(root->val);

        addLeftBoundary(root);
        addLeaves(root);
        addRightBoundary(root);

        return v;


        
        // write your code here
    }
};