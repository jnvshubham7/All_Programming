/*
 * @lc app=leetcode id=1161 lang=cpp
 *
 * [1161] Maximum Level Sum of a Binary Tree
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
    int ans=INT_MIN;
    int maxLevelSum(TreeNode* root) {

        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        int maxLevel=0;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
            level++;
            while(size--){
                TreeNode* temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(sum>ans){
                ans=sum;
                maxLevel=level;
            }
        }
        return maxLevel;


        
    }
};
// @lc code=end

