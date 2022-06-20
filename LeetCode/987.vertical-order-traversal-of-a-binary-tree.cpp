/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
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
    
    map<int,vector<pair<int,int>>> m;

    void dfs(TreeNode* root, int dist,int level)
    {
        if(root==NULL)
        return;

        m[dist].push_back(make_pair(level,root->val));

        dfs(root->left,dist-1,level+1);
        dfs(root->right,dist+1,level+1);
    }
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        dfs(root,0,0);

        vector<vector<int>> ans;

        for(auto it:m)
        {
            // cout<<it.first<<" ";

            sort(it.second.begin(),it.second.end());
            vector<int> temp;

            for(auto x:it.second)
            {
               cout<<x.first<<" "<<x.second<<" ";
                temp.push_back(x.second);
            }

            cout<<endl;

            

            for(int i=0;i<temp.size();i++)
            {
                //cout<<temp[i]<<" ";
            }

            
            
            ans.push_back(temp);
        }
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
               // cout<<ans[i][j]<<" ";
            }
           
        }

        return ans;

        

        
    }
};
// @lc code=end

