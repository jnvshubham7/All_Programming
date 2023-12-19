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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

      vector<TreeNode*> path1;
       vector<TreeNode*> path2;

        if(!findPath(root, p, path1) || !findPath(root, q, path2)) return nullptr;

       int i=0;

        while(i<path1.size() && i<path2.size())
            {
                if(path1[i]!=path2[i])
                {
                    break;
                }
                i++;
            }
            return path1[i-1];

    } 

    bool findPath(TreeNode* root, TreeNode* n, vector<TreeNode*>& path)
    {
        if(root == nullptr) return false;

        path.push_back(root);

        if(root->val == n->val) return true;

        if(findPath(root->left, n, path) || findPath(root->right, n, path)) return true;

        path.pop_back();

        return false;
    } 


};
// @lc code=end




















