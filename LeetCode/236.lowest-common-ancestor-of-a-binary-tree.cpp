/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
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

       vector<TreeNode*> path1,path2;
       
       if(!findPath(root,p,path1) || !findPath(root,q,path2))
       {
              return NULL;
       }

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

    bool findPath(TreeNode* root, TreeNode* p, vector<TreeNode*>& path)
    {
        if(root==NULL)
        {
            return false;
        }
        path.push_back(root);
        if(root==p)
        {
            return true;
        }
        if(findPath(root->left,p,path) || findPath(root->right,p,path))
        {
            return true;
        }
        path.pop_back();
        return false;
    }
};
// @lc code=end

