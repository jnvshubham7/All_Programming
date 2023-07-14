/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        return countPaths(0, 0, m, n);
    }


    int countPaths(int row, int col, int m, int n) {
         int rightPaths = 0, downPaths = 0;


        // Base case: if the robot reaches the bottom-right corner, return 1

        
        if (row == m - 1 && col == n - 1) {
            return 1;
        }

        // Recursive case: try moving right and down and sum up the results
       
        if (col < n - 1) {
            rightPaths = countPaths(row, col + 1, m, n);
        }
        if (row < m - 1) {
            downPaths = countPaths(row + 1, col, m, n);
        }

        return rightPaths + downPaths;
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