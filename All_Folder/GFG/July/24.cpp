
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


    
    class Node{
        public:
        int data;
        Node *left,*right;
        Node(int data){
            this->data=data;
            left=right=NULL;
        }
    };
    
    
    





class Solution{
    public:

    // vector<int> path;
    //  int sum=0;
    int maxPathSum(Node* root)
    {

        if(root==NULL)
        {
            return 0;
        }

        int left=maxPathSum(root->left);
        int right=maxPathSum(root->right);
        int maxPath=max(left,right)+root->data;

        return maxPath;


        // solve(root);
        // //print(root);

        // for(int i=0;i<path.size();i++)
        // {
        //    cout<<path[i]<<" ";
        // }
        // cout<<endl;
        

        // return max(path);

        
       
    }

//    void solve(Node* root)
//     {
        
       
//         if(root->left==NULL && root->right==NULL)
//         {

//             sum+=root->data;

//             path.push_back(sum);
//             sum=0;
            
//             return;
//         }
//         sum+=root->data;
//         if(root->left!=NULL)
//         {
//             solve(root->left);
//         }
//         if(root->right!=NULL)
//         {
//             solve(root->right);
//         }

        
        
//     }

//     int max(vector<int>& v)
//     {
//         int max=INT_MIN;
//         for(int i=0;i<v.size();i++)
//         {
//             if(v[i]>max)
//             {
//                 max=v[i];
//             }
//         }
//         return max;
//     } 


};










int main(){
Solution s;

   vector<int> v={1,2,3};

    Node* root=new Node(v[0]);
    Node* temp=root;
    for(int i=1;i<v.size();i++)
    {
        temp->left=new Node(v[i]);
        temp=temp->left;
    }
    temp=root;
    for(int i=1;i<v.size();i++)
    {
        temp->right=new Node(v[i]);
        temp=temp->right;
    }

    
    cout<<s.maxPathSum(root)<<endl;
   
    return 0;
}


