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



    TreeNode* bstFromPreorder(vector<int>& pre) {   

        int n = pre.size();

        if(n == 0) return nullptr;

        return helper(pre, 0, n-1);

      
    }

    TreeNode* helper(vector<int>& pre, int start, int end)
    {
        if(start > end) return nullptr;

        TreeNode* root = new TreeNode(pre[start]);

        int i = start+1;

        while(i <= end && pre[i] < pre[start]) i++;

        root->left = helper(pre, start+1, i-1);

        root->right = helper(pre, i, end);

        return root;
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