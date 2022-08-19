/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {


      int p_size=preorder.size();
        int i_size=inorder.size();

        return solve(preorder,0,p_size-1,inorder,0,i_size-1);


    //   for(int i=0;i<n;i++)
    //   {
    //       int pre=preorder[i];
    //       int ind_pos= find_ind(inorder,pre);

    //         TreeNode* left=buildTree(preorder,inorder,0,ind_pos-1);
    //         TreeNode* right=buildTree(preorder,inorder,ind_pos+1,n-1);
    //         TreeNode* root=new TreeNode(pre);
    //         root->left=left;
    //         root->right=right;
    //         return root;
    //   }

    //     return NULL;


    //  }

    //     int find_ind(vector<int>& inorder,int pre)
    //     {
    //         int n=inorder.size();
    //         for(int i=0;i<n;i++)
    //         {
    //             if(inorder[i]==pre)
    //             {
    //                 return i;
    //             }
    //         }
    //         return -1;
    //     }

    //     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,int start,int end)
    //     {
    //         if(start>end)
    //         {
    //             return NULL;
    //         }
    //         int pre=preorder[0];
    //         int ind_pos= find_ind(inorder,pre);
    //         TreeNode* left=buildTree(preorder,inorder,0,ind_pos-1);
    //         TreeNode* right=buildTree(preorder,inorder,ind_pos+1,end);
    //         TreeNode* root=new TreeNode(pre);
    //         root->left=left;
    //         root->right=right;
    //         return root;
    //     }
     }


    TreeNode* solve(vector<int>& preorder,int pre_start, int pre_end,vector<int>& inorder,int in_start,int in_end)
    {
        if(pre_start>pre_end)
        {
            return NULL;
        }
        int pre=preorder[pre_start];
        TreeNode* root=new TreeNode(pre);
        int ind_pos= find_ind(inorder,pre,in_start,in_end);
        root->left=solve(preorder,pre_start+1,pre_start+ind_pos-in_start,inorder,in_start,ind_pos-1);
        root->right=solve(preorder,pre_start+ind_pos-in_start+1,pre_end,inorder,ind_pos+1,in_end);
        
    }

    int find_ind(vector<int>& inorder,int pre,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==pre)
            {
                return i;
            }
        }
        return -1;
    }
  
    
};
// @lc code=end
