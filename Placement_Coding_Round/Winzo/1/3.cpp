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
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


int main(){
ll t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int r;
    cin>>r;

    TreeNode* root = new TreeNode(r);
    n--;

    TreeNode *temp =root;

    n--;
    while(n--)
    {

//         2 R 5
// 5 R 9
// 7 R 6
// 6 R 11
// 9 L 4
// 2 L 7
// 7 L 1
// 6 L 3


          int parent,child;
         char c;
            cin>>parent>>c>>child;
            if(c=='L')
            {
                temp->left = new TreeNode(child);
                temp = temp->left;
            }
            else
            {
                temp->right = new TreeNode(child);
                temp = temp->right;
            }
            

            




    }

   

}

    return 0;
}


