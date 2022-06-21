/*
 * @lc app=leetcode id=662 lang=cpp
 *
 * [662] Maximum Width of Binary Tree
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
    int widthOfBinaryTree(TreeNode* root) {
    if (root == NULL)
        return 0;
    queue<pair<TreeNode *, long long int>> q;
    q.push({root, 0});
    int ans=0;
    while (!q.empty())
    {
        int n = q.size();
       // cout<<n<<" ";
        int mn=q.front().second;
       // cout<<mn<<" ";
        //print q.first and q.second
        int mx=q.back().second;
       // cout<<mx<<" "<<endl;
        //print all q.second 
       
       
        int first,last;
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp=q.front().first;
            long long int curr_min=q.front().second-mn;
            cout<<curr_min<<" "<<endl;
            q.pop();
            if(i==0) first=curr_min;
            if(i==n-1) last=curr_min;
           // cout<<i<<" "<<first<<" "<<last<<" ";
            if(temp->left) q.push({temp->left,curr_min*2+1});
            if(temp->right) q.push({temp->right,curr_min*2+2});
        }
        ans=max(ans,last-first+1);
    }
    return ans;
    }
};
// @lc code=end

