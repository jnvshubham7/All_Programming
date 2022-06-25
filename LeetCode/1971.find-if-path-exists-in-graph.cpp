/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
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
    




// @lc code=start
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        
        
    }
};
// @lc code=end





int main(){
Solution s;

    int n;
    cin>>n;
    vector<vector<int>> edges(n, vector<int>(2, 0));
    for(int i=0;i<n;i++){
        cin>>edges[i][0]>>edges[i][1];
    }
    int source,destination;
    cin>>source>>destination;
    bool ans=s.validPath(n,edges,source,destination);

   // cout<<ans<<endl;

   //print edges
    for(int i=0;i<n;i++){
         cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
    }


    return 0;
}