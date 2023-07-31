/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
    
    vector<int> v;
    int i = 0;
    void recoverTree(TreeNode* root) {

        inorder(root);
        sort(v.begin(), v.end());
        check(root);

      
    }

    void inorder(TreeNode* root) {
        if(root == NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }

    void check(TreeNode* root) {
        if(root == NULL) return;
        check(root->left);
        if(i < v.size() && v[i] == root->val) {
            i++;
        } else {
           swap(v[i], root->val);
            i++;
        }
        check(root->right);
    }

  
};
// @lc code=end

