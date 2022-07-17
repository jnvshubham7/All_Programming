/*
 * @lc app=leetcode id=576 lang=cpp
 *
 * [576] Out of Boundary Paths
 */

// @lc code=start
class Solution {
public:
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>


int dp[55][55][55];

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        mem (dp, -1);

        return solve(m,n,maxMove,startRow,startColumn);
        
    }

    int solve(int m, int n, int maxMove, int startRow, int startColumn) {
        if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n)
            return 1;
        if(dp[startRow][startColumn][maxMove]!=-1)
            return dp[startRow][startColumn][maxMove];
        ll ans=0;
        if(maxMove>0)
            ans+=solve(m,n,maxMove-1,startRow,startColumn+1);
        if(maxMove>0)
            ans+=solve(m,n,maxMove-1,startRow+1,startColumn);
        if(maxMove>0)
            ans+=solve(m,n,maxMove-1,startRow,startColumn-1);
        if(maxMove>0)
            ans+=solve(m,n,maxMove-1,startRow-1,startColumn);
        dp[startRow][startColumn][maxMove]=ans%mod;
        return ans%mod;
    }

   

};
// @lc code=end

