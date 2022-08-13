
./*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
  
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  
  };

void print(TreeNode* root)
{
    if(root==NULL)
    {
       // cout<<"NULL"<<endl;
        return;
    }
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
}


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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL && q==NULL)
        return true;

        if(p==NULL || q==NULL)
        return false;

      
      if(p->val!=q->val)
      return false;
      bool left=isSameTree(p->left,q->left);
      bool right=isSameTree(p->right,q->right);

      if(!left || !right)
      return false;

      return true;
    }
};
// @lc code=end






int main(){
Solution s;

//take two array input then create tree from it
 int n;
 cin>>n;
 int a[n],b[n];
  fr(i,n){
    cin>>a[i];
  }
  
  
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

  fr(i,n){
    cin>>b[i];
  }
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

  //cout<<s.isSameTree(root,root2);

//  print val of tree
  print(root);
  cout<<endl;
  print(root2);
  cout<<endl;
  



  

 

 


  //cout<<s.isSameTree(root,root2);




  

  return 0;
}