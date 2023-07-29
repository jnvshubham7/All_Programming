/*
 * @lc app=leetcode id=872 lang=cpp
 *
 * [872] Leaf-Similar Trees
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
   
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        // vector<int> v1;
        // vector<int> v2;

        // rec(root1,v1);
        // rec(root2,v2);

        // if(v1.size()!=v2.size())
        //     return false;

        // for(int i=0;i<v1.size();i++)
        // {
        //     if(v1[i]!=v2[i])
        //         return false;
        // }

        // return true;

        vector<int> v1;
        vector<int> v2;

        rec(root1,v1);
        rec(root2,v2);

        if(v1.size()!=v2.size())
            return false;

            for(int i=0;i<v1.size();i++)
            {
                if(v1[i]!=v2[i])
                    return false;
            }

            return true;

        
    }

    void rec(TreeNode* root,vector<int> &v)
    {
        if(root==NULL)
            return;

        if(root->left==NULL && root->right==NULL)
        {
            v.pb(root->val);
            return;
        }

        rec(root->left,v);
        rec(root->right,v);
    }
};
// @lc code=end

