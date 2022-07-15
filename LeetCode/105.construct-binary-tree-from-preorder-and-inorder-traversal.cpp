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
     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return dfs(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);

       
       
    }

    TreeNode* dfs(vector<int>& preorder, vector<int>& inorder, int pre_start, int pre_end, int in_start, int in_end) {
        if (pre_start > pre_end || in_start > in_end) {
            return nullptr;
        }
        int root_val = preorder[pre_start];
        int root_index = search(inorder, in_start, in_end, root_val);

        TreeNode* root = new TreeNode(root_val);

       int left_size = root_index - in_start;
       int right_size = in_end - root_index;




         int pre_left_start = pre_start + 1;
         int pre_left_end = pre_start + left_size;


        int pre_right_start = pre_left_end + 1;
        int pre_right_end = pre_end;

        int in_left_start = in_start;
        int in_left_end = root_index - 1;

        int in_right_start = root_index + 1;
        int in_right_end = in_end;

        root->left = dfs(preorder, inorder, pre_left_start, pre_left_end, in_left_start, in_left_end);
        root->right = dfs(preorder, inorder, pre_right_start, pre_right_end, in_right_start, in_right_end);
        return root;








       
    }

    int search(vector<int>& inorder, int start, int end, int target) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == target) {
                return i;
            }
        }
        return -1;
    }

   
    
};
// @lc code=end

Void solve{
static int count = 0;
count++;
}
