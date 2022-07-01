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
    int minPathSum(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

       int dp[n][m];

         dp[0][0]=grid[0][0];

            for(int i=1;i<n;i++)
            {
                dp[i][0]=dp[i-1][0]+grid[i][0];
            }
            for(int i=1;i<m;i++)
            {
                dp[0][i]=dp[0][i-1]+grid[0][i];
            }

            for(int i=1;i<n;i++)
            {
                for(int j=1;j<m;j++)
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                }
            }

            return dp[n-1][m-1];

        
    }
};
// @lc code=end








#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

     
    //[[1,3,1],[1,5,1],[4,2,1]]
    vector<vector<int>> grid={{1,3,1},{1,5,1},{4,2,1}};

     int n=grid.size();
    int m=grid[0].size();
   

     int dp[n][m];

         dp[0][0]=grid[0][0];

            for(int i=1;i<n;i++)
            {
                dp[i][0]=dp[i-1][0]+grid[i][0];
            }
            for(int i=1;i<m;i++)
            {
                dp[0][i]=dp[0][i-1]+grid[0][i];
            }

            for(int i=1;i<n;i++)
            {
                for(int j=1;j<m;j++)
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                }
            }

            //print dp
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<dp[i][j]<<" ";
                }
                cout<<endl;
            }

            //print grid[0].size() elements of grid
            // for(int i=0;i<grid[0].size();i++)
            // {
            //     cout<<grid[0][i]<<" ";
            // }
            // cout<<endl;

            //print grid.size() elements of grid
            // for(int i=0;i<grid.size();i++)
            // {
            //     cout<<grid[i][0]<<" ";
            // }
            // cout<<endl;


            

           // return dp[n-1][m-1];




    return 0;
}