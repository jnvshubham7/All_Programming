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
    ++res;
    for(int i=0;i<q.size();++i)
    {
        TreeNode *p=q.front();
        q.pop();

        if(p->left!=NULL)
        q.push(q->left);
        if(p->right!=NULL)
        q.push(p->right);

    }
}

return res;
















		//Given the root of a binary tree, return its maximum depth.
        // if(root==NULL)
        // return 0;
        // else {
        //     int l=maxDepth(root->left);
        //     int r=maxDepth(root->right);
        //     return max(l,r)+1;

        // }
}
};