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

      unordered_map<int, int> indexMap;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
        for (int i = 0; i < inorder.size(); i++) {
            indexMap[inorder[i]] = i;
        }

        int preIndex = 0;
        return buildTreeHelper(preorder, inorder, preIndex, 0, inorder.size() - 1);   
       
    }

    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inEnd) {
        if (inStart > inEnd) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preIndex]);
        int inIndex = indexMap[preorder[preIndex]];
        preIndex++;
        root->left = buildTreeHelper(preorder, inorder, preIndex, inStart, inIndex - 1);
        root->right = buildTreeHelper(preorder, inorder, preIndex, inIndex + 1, inEnd);
        return root;
    }


};

// @lc code=end
