/*
 * @lc app=leetcode id=1373 lang=cpp
 *
 * [1373] Maximum Sum BST in Binary Tree
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
    
    int ans = 0;
    int maxSumBST(TreeNode* root) {

        maxSumBSTHelper(root);
        return ans;

        
        
    }

    void maxSumBSTHelper(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        if (isBST(root)) {
            ans = max(ans, sum(root));
            return;
        }

        maxSumBSTHelper(root->left);
        maxSumBSTHelper(root->right);
    }

    bool isBST(TreeNode* root) {
        return isBSTHelper(root, INT_MIN, INT_MAX);
    }

    bool isBSTHelper(TreeNode* root, int min, int max) {
        if (root == nullptr) {
            return true;
        }

        if (root->val <= min || root->val >= max) {
            return false;
        }

        return isBSTHelper(root->left, min, root->val) && isBSTHelper(root->right, root->val, max);
    }

    int sum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        return root->val + sum(root->left) + sum(root->right);
    }


};
// @lc code=end

