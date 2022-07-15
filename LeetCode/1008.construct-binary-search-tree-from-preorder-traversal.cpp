/*
 * @lc app=leetcode id=1008 lang=cpp
 *
 * [1008] Construct Binary Search Tree from Preorder Traversal
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



    TreeNode* bstFromPreorder(vector<int>& preorder) {

        return solve(preorder);

      
    }

    TreeNode* solve(vector<int>& preorder)
    {
        if(preorder.size()==0)
        {
            return NULL;
        }
        
        int root=preorder[0];
        TreeNode* root_node=new TreeNode(root);
        
        vector<int> left_preorder;
        vector<int> right_preorder;
        
        for(int i=1;i<preorder.size();i++)
        {
            if(preorder[i]<root)
            {
                left_preorder.pb(preorder[i]);
            }
            else
            {
                right_preorder.pb(preorder[i]);
            }
        }
        
        root_node->left=solve(left_preorder);
        root_node->right=solve(right_preorder);
        
        return root_node;
    }
};
// @lc code=end





int main(){
Solution s;

    int n;
    cin>>n;
    int a[n];
    fr(i,n)
    {
        cin>>a[i];
    }
    vector<int>v(a,a+n);
    TreeNode* ans=s.bstFromPreorder(v);

  s.printTree(ans);


    return 0;
}