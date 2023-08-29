/*
 * @lc app=leetcode id=222 lang=cpp
 *
 * [222] Count Complete Tree Nodes
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
  




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

int ans=0;


      



    int countNodes(TreeNode* root) {

      queue<TreeNode*> q;

      q.push(root);

      while(!q.empty())
      {
          TreeNode* temp=q.front();
          q.pop();
         

         int sz=q.size();

          ans+=sz;



          

          if(temp->left!=NULL)
          {
              q.push(temp->left);
          }

          if(temp->right!=NULL)
          {
              q.push(temp->right);
          }
      }

      return ans;

        
        
    }
};
// @lc code=end


