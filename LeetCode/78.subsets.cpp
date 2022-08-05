/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
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

    vector<vector<int>> subsets(vector<int>& nums) {

        

        


        
    }
};
// @lc code=end





int main(){
Solution s;

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    vi v(n);
    fr(i,n)
    {
        cin>>v[i];
    }
    vi ans=s.subsets(v);
    cout<<ans.size()<<endl;
    fr(i,ans.size())
    {
        fr(j,ans[i].size())
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}

    return 0;
}