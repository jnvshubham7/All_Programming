/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
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
    int minPathSum(vector<vector<int>>& g) {

        int m=g.size();
        int n=g[0].size();

        vector<vector<int>> memo(m, vector<int>(n,-1));

        return rec(memo, 0, 0, m, n, g);

       
    }

    int rec(vector<vector<int>>& memo, int i, int j, int m, int n, vector<vector<int>>& g)
    {
        if(i==m-1 && j==n-1)
        {
            return g[i][j];
        }

        if(i>=m || j>=n)
        {
            return INT_MAX;
        }

        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }

        int ans=min(rec(memo, i+1, j, m, n, g), rec(memo, i, j+1, m, n, g)) + g[i][j];

        memo[i][j]=ans;

        return ans;

    }



   
};
// @lc code=end






