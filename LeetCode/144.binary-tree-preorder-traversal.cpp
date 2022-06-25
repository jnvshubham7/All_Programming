/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
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
    vector<int> ans;
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        ans.push_back(root->val);
        solve(root->left);
        solve(root->right);
    }

    
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> v;
        if(root==NULL)
        return v;

        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* curr=st.top();
            st.pop();

            v.push_back(curr->val);
             if(curr->right)
            {
                st.push(curr->right);
            }
            if(curr->left)
            {
                st.push(curr->left);

            }
           

        }
        

        return v;




        // solve(root);
        // return ans;
        
    }
};
// @lc code=end






int main(){
Solution s;

    int n;
    cin>>n;
    int a[n];
    fr(i,n){
        cin>>a[i];
    }
    TreeNode* root=new TreeNode(a[0]);
    TreeNode* temp=root;
    fr(i,n){
        if(i==0)
        continue;
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

    

    vector<int> v=s.preorderTraversal(root);
   
    fr(i,v.size()){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    return 0;
}

