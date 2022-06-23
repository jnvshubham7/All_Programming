/*
 * @lc app=leetcode id=863 lang=cpp
 *
 * [863] All Nodes Distance K in Binary Tree
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

      unordered_map<TreeNode*, TreeNode*> m;

      void dfs(TreeNode* root)
      {
        if(!root)
        return;

        if(root->left)
        {
            m.insert({root->left,root});

        }

        if(root->right)

        {
            m.insert({root->right,root});
        }

        dfs(root->left);
        dfs(root->right);




      }


    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

       
        dfs(root);
        queue<TreeNode*> q;
        q.push(target);

        vector<int> ans;

        unordered_map<TreeNode*,bool> visited;

        while(!q.empty())
        {
            int size=q.size();

            while(size--)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(k==0)
                {
                    ans.push_back(curr->val);
                }
                visited[curr]=true;

                if(curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                }

                if(curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                }

                if(m.find(curr)!=m.end() && !visited[m[curr]])
                {
                    q.push(m[curr]);
                }

            }

            k--;
            if(k<0)
            break;
        }

        return ans;

        
    }
};
// @lc code=end

