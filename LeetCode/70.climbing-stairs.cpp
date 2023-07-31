/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
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
    int climbStairs(int n) {

        vector<int> dp(n+2,0);

        dp[1]=1;
        dp[2]=2;

        for(int i=3;i<=n;i++){

            dp[i]=dp[i-1]+dp[i-2];

        }

        return dp[n];
        
    }
};
// @lc code=end

