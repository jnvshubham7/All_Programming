/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
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
    




// @lc code=start
class Solution {
public:


    int coinChange(vector<int>& coins, int amount) {

    
        
    }                                               

};
// @lc code=end






int main(){
Solution s;

   int n;
    cin>>n;
    vi v;
    fr(i,n)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    int amount;
    cin>>amount;
    cout<<s.coinChange(v,amount)<<endl;


    return 0;
}
