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


int height(TreeNode* root){
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}



    int diameterOfBinaryTree(TreeNode* root) {

//         Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree.


// This path may or may not pass through the root.


// Note: The length of path between two nodes is represented by the number of edges between them.


//find maximum length of two in whole tree



if(root==NULL)
    return 0;


int l=height(root->left);
int r=height(root->right);


int ld=diameterOfBinaryTree(root->left);
int rd=diameterOfBinaryTree(root->right);   


return max(l+r,max(ld,rd));











// if(root==NULL)

//     return 0;

//     int ld=diameterOfBinaryTree(root->left);

//     int rd=diameterOfBinaryTree(root->right);

//     int lh=height(root->left);

//     int rh=height(root->right);

//     return max(ld,rd,lh+rh+1);







        // if(root == NULL)
        //     return 0;

        // int left = diameterOfBinaryTree(root->left);
        // int right = diameterOfBinaryTree(root->right);

        // int max_diameter = max(left, right);

        // return max(max_diameter, left + right + 1); 

        
        
    }
};