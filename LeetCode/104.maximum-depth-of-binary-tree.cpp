/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    int maxDepth(TreeNode* root) {

if(root==NULL)
return 0;

int res=0;
queue<TreeNode *> q;
q.push(root);
while(!q.empty())
{
    res++;
    for(int i=0;i<q.size();++i)
    {
        TreeNode *p=q.front();
        q.pop();

        if(p->left!=NULL)
        q.push(p->left);
        if(p->right!=NULL)
        q.push(p->right);

    }
}

return res;
        
    }
};
// @lc code=end

