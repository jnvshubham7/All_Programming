/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
      
   unordered_map<int, int> dict;

    TreeNode *solve(vector<int> &postorder, vector<int> &inorder, int start, int end, int &index) {
        if (index<0 || start > end) 
        return NULL;
    
        TreeNode *root = new TreeNode(postorder[index]);
        int position = dict[postorder[index]];
        index--;
        root -> right = solve(postorder, inorder, position + 1, end, index);
        root -> left = solve(postorder, inorder, start, position - 1, index);
        
        return root;
    }



    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        

       

        int index=postorder.size() - 1;

         for (int i = 0; i < inorder.size(); ++i) 
         {
            dict[inorder[i]] = i;
         }
            
       return solve(postorder, inorder, 0, postorder.size() - 1, index);

    }
};
// @lc code=end

