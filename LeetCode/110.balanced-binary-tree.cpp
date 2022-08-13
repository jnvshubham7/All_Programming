/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
    

     class TreeNode
     {
        public:
        int val;
        TreeNode* left;
        TreeNode* right;
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

int height(TreeNode* root)
{
    if(root==NULL)
    return 0;
    int l=height(root->left);
    int r=height(root->right);

    return 1+max(l,r);

}

bool dfs(TreeNode* root)
{
    if(root==NULL)
    return true;


    int l_height=height(root->left);
    int r_height=height(root->right);

    if(abs(l_height-r_height)>1)
    return false;

    bool l=dfs(root->left);
    bool r=dfs(root->right);

    if(!l || !r)
    return false;

    return true;




}


    bool isBalanced(TreeNode* root) {

        return dfs(root);

        
    }
};
// @lc code=end








int main(){
Solution s;


    vector<int> a={1,2,2,3,4,4,5,6,7};

    TreeNode* root=new TreeNode(a[0]);
    TreeNode* temp=root;


    for(int i=1;i<a.size();i++)
    {
      if(a[i]<temp->val)
      {
        temp->left=new TreeNode(a[i]);
        temp=temp->left;
      }
      else
      {
        temp->right=new TreeNode(a[i]);
        temp=temp->right;
      }
    }




  //   for(int i=1;i<a.size();i++)
  //   {
  //   if(a[i]<temp->val){

  //     //if(temp->left==NULL){
  //       temp->left=new TreeNode(a[i]);
  //       temp=temp->left;
  //     // }
  //     // else{
  //     //   temp=temp->left;
  //     //   temp->left=new TreeNode(a[i]);
  //     //   temp=temp->left;
  //     // }
  //   }
  //   else{
  //    // if(temp->right==NULL){
  //       temp->right=new TreeNode(a[i]);
  //       temp=temp->right;
  //     // }
  //     // else{
  //     //   temp=temp->right;
  //     //   temp->right=new TreeNode(a[i]);
  //     //   temp=temp->right;
  //     // }
  //   }
  // }

    //print root
    print(root);

    // bool ans=s.isBalanced(root);
    // if(ans)
    // cout<<"true";
    // else
    // cout<<"false";




    



    return 0;
}