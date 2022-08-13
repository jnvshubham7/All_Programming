/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>
    

    class TreeNode{
        public:
        int val;
        TreeNode *left;
        TreeNode* right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };





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

 
 int diameterOfBinaryTree(TreeNode* root) {

    if(root == NULL) return 0;
    int left = diameterOfBinaryTree(root->left);
    int right = diameterOfBinaryTree(root->right);
    int mxx = max(left, right);
    return mxx + 1;
    



  
    }
   

    

};
// @lc code=end






int main(){
Solution s;


    
    vector<int> a={1,2,3,4,5,6,7};
    TreeNode* root=new TreeNode(a[0]);
    TreeNode* temp=root;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<temp->val){
      if(temp->left==NULL){
        temp->left=new TreeNode(a[i]);
        temp=temp->left;
      }
      else{
        temp=temp->left;
        temp->left=new TreeNode(a[i]);
        temp=temp->left;
      }
    }
    else{
      if(temp->right==NULL){
        temp->right=new TreeNode(a[i]);
        temp=temp->right;
      }
      else{
        temp=temp->right;
        temp->right=new TreeNode(a[i]);
        temp=temp->right;
      }
    }
    }

    cout<<s.diameterOfBinaryTree(root);






    return 0;
}