/*
 * @lc app=leetcode id=173 lang=cpp
 *
 * [173] Binary Search Tree Iterator
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
class BSTIterator {
public:

  stack<TreeNode*> nodes;

    void inorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        inorder(root->right);
        nodes.push(root);
        inorder(root->left);
    }
     
     
    BSTIterator(TreeNode* root) {

        inorder(root);


        
    }
    
    int next() {
        TreeNode* node = nodes.top();
        nodes.pop();
        return node->val;
        
    }
    
    bool hasNext() {

        return !nodes.empty();
        
    }
};
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

