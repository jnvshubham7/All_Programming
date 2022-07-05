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
    bool isValidBST(TreeNode* root) {

        vector<int> left;
        vector<int> right;
        int root=root->val;
        
        if(root==NULL)
        {
            return true;
        }

        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }

        if((root->left) &&(root->left->val>=root->val))
        {
            return false;
        }
         if((root->right) && (root->right->val<=root->val))
        {
            return false;
        }



        // if(root->val<=root->right->left->val)
        // {
        //     return false;
        // }
        // if(root->val>=root->left->right->val)
        // {
        //     return false;
        // }

        bool left=isValidBST(root->left);
        bool right=isValidBST(root->right);

        if(!left || !right)
        {
            return false;
        }
        

        return true;


        
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