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

 unordered_map<int, int> dict;

    TreeNode *solve(vector<int> &preorder, vector<int> &inorder, int start, int end, int &index) {
        if (start > end) 
        {
            cout<<start<<" "<<end<<" ";
            cout<<"NULL"<<" ";
             return NULL;

        }

        cout<<start<<" "<<end<<" "<<endl;
         
       
    
        TreeNode *root = new TreeNode(preorder[index]);

        cout<<root->val<<" ";


        int position = dict[preorder[index]];
        cout<<position<<" "<<endl; 
        index++;
        root -> left = solve(preorder, inorder, start, position - 1, index);

        

        root -> right = solve(preorder, inorder, position + 1, end, index);

         

      

        return root;
    }



    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int index=0;

         for (int i = 0; i < inorder.size(); ++i) 
         {
            dict[inorder[i]] = i;
         }
            
       return solve(preorder, inorder, 0, preorder.size() - 1, index);

    }
};
// @lc code=end

