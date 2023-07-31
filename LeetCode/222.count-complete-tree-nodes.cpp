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

      int left_height(TreeNode *root)
      {
        if(root==NULL) return 0;
        int height=0;

        while(root)
        {
            height++;
            root=root->left;
        }

        return height;

      }

      int right_height(TreeNode *root)
      {
        if(root==NULL) return 0;

        int height=0;

        while(root)
        {
            height++;

          root=root->right;

        }

        return height;

        }

        


      



    int countNodes(TreeNode* root) {

        if(root==NULL) return 0;

        int left_h=left_height(root);
        cout<<left_h<<" ";
        int right_h=right_height(root);
        cout<<right_h<<" "<<endl;

        if(left_h==right_h) 
        {
            cout<<((2^left_h)-1)<<" "<<endl;
        return (pow(2,left_h)-1);
        }
        

        else 
        {
            
            
              ans= 1+countNodes(root->left)+countNodes(root->right);
             cout<<ans<<" ";

             return ans;


            
        }
       
        
    }
};
// @lc code=end


