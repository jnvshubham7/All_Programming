/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {

       vector<vector<int>> dp(m, vector<int>(n, 1));

         for (int i = 1; i < m; i++) {
              for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
              }
         }

            return dp[m-1][n-1];

        
    }
};
// @lc code=end









#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int n,m;
cin>>n>>m;

vector<vector<int>> dp(m, vector<int>(n, 1));

         for (int i = 1; i < m; i++) {
              for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
              }
         }

          //  return dp[m-1][n-1];

//print dp
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<dp[i][j]<<" ";
    }

    cout<<endl;
}

    return 0;
}