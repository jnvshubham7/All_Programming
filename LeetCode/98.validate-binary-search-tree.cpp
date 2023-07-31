/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    

    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x) : val(x),left(NULL), right(NULL) {}
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

 #define ll long long





    bool isValidBST(TreeNode* root) {

        return isValidBST(root,LLONG_MIN,LLONG_MAX);
    }

    bool isValidBST(TreeNode* root,ll min,ll max){
        if(root==NULL) return true;
        if(root->val<=min || root->val>=max) return false;
        return isValidBST(root->left,min,root->val) && isValidBST(root->right,root->val,max);
    }


    
};
// @lc code=end





int main(){
Solution s;

  // [1,null,1]

    TreeNode* root=new TreeNode(1);
    root->left=NULL;
    root->right=new TreeNode(1);
    cout<<s.isValidBST(root)<<endl;
    


    return 0;
}