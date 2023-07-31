/*
 * @lc app=leetcode id=2385 lang=cpp
 *
 * [2385] Amount of Time for Binary Tree to Be Infected
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
    int level=0;
    int amountOfTime(TreeNode* root, int start) {

        vector<int> adj[100001];
        vector<int> vis(100001, 0);

        buildGraph(root, adj);

        bfs(adj, vis, start);
        return level-1;





        

    }

    void buildGraph(TreeNode* root, vector<int> adj[]) {
        if(root == nullptr) return;
        if(root->left != nullptr) {
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
        }
        if(root->right != nullptr) {
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
        }
        buildGraph(root->left, adj);
        buildGraph(root->right, adj);
    }


    void bfs(vector<int> adj[], vector<int> vis, int start) {
        queue<int> q;
        q.push(start);
        vis[start] = 1;
        while(!q.empty()) {
            int size = q.size();
            for(int i=0; i<size; i++) {
                int cur = q.front();
                q.pop();
                for(int j=0; j<adj[cur].size(); j++) {
                    if(vis[adj[cur][j]] == 0) {
                        vis[adj[cur][j]] = 1;
                        q.push(adj[cur][j]);
                    }
                }
            }
            level++;
        }
    }



};
// @lc code=end

