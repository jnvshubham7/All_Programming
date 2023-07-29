/*
 * @lc app=leetcode id=174 lang=cpp
 *
 * [174] Dungeon Game
 */

// @lc code=start
class Solution {
public:
  int calculateMinimumHP(vector<vector<int>> &dungeon) {

    int n = dungeon.size();
    int m = dungeon[0].size();

    if (!dungeon.size() || !dungeon[0].size())

      return 1;

    int dp[n + 1][m + 1];

    memset(dp, INT_MAX, sizeof(dp));

    dp[n - 1][m - 1] = 1;

    for (int i = n - 1; i >= 0; i--) {
      for (int j = m - 1; j >= 0; j--) {
        int temp = min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j];
        dp[i][j] = max(temp, 1);
      }
    }

    if ((dp[0][0] == 1) && (m == 1 && n == 1))

      return 1;

    else

      return dp[0][0] + 1;

    //     dp[0][0]=dungeon[0][0];

    //     for(int i=1;i<n;i++)
    //     {
    //         dp[i][0]=dp[i-1][0]+dungeon[i][0];
    //     }
    //     for(int i=1;i<m;i++)
    //     {
    //         dp[0][i]=dp[0][i-1]+dungeon[0][i];
    //     }

    //     for(int i=1;i<n;i++)
    //     {
    //         for(int j=1;j<m;j++)
    //         {
    //             dp[i][j]=min(dp[i-1][j],dp[i][j-1])+dungeon[i][j];
    //         }
    //     }

    //   int ans=dp[n-1][m-1];
    //   return ans;

    //   if(ans>0)
    //   return 0;
    //   else
    //   return -(ans)+1;
  }
};
// // @lc code=end

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int t;
  cin >> t;
  while (t--) {

    // dungeon = [[-2,-3,3],[-5,-10,1],[10,30,-5]]

    // vector<vector<int>> dungeon={{-2,-3,3},{-5,-10,1},{10,30,-5}};

    vector<vector<int>> dungeon;
    // push from cin
    int n;
    cin >> n;
    int m;

    cin >> m;

    for (int i = 0; i < n; i++) {
      vector<int> temp;
      for (int j = 0; j < m; j++) {
        int temp1;
        cin >> temp1;
        temp.push_back(temp1);
      }
      dungeon.push_back(temp);
    }

    // int n=dungeon.size();
    // int m=dungeon[0].size();

    if (!dungeon.size() || !dungeon[0].size()) {
      return 1;
    }

    int dp[n + 1][m + 1];

    memset(dp, INT_MAX, sizeof(dp));

    dp[n - 1][m - 1] = 1;

    for (int i = n - 1; i >= 0; i--) {
      for (int j = m - 1; j >= 0; j--) {
        int temp = min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j];
        if (temp > 0) {
          dp[i][j] = temp;
        } else {
          dp[i][j] = 1;
        }
      }
    }

    //  cout<<dp[0][0]+1<<endl;
    // print dp
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    if (dp[0][0] == 1) {
      cout << 1 << endl;
    } else {
      cout << dp[0][0] + 1;
    }

    // cout<<dp[0][0]+1;

    // dp[0][0]=dungeon[0][0];

    // for(int i=1;i<n;i++)
    // {
    //     dp[i][0]=dp[i-1][0]+dungeon[i][0];
    // }
    // for(int i=1;i<m;i++)
    // {
    //     dp[0][i]=dp[0][i-1]+dungeon[0][i];
    // }

    // for(int i=1;i<n;i++)
    // {
    //     for(int j=1;j<m;j++)
    //     {
    //         dp[i][j]=max(dp[i-1][j],dp[i][j-1])+dungeon[i][j];
    //     }
    // }

    // for(int i=1;i<n;i++)
    // {
    //     for(int j=1;j<m;j++)
    //     {
    //         dp[i][j]=max(dp[i-1][j],dp[i][j-1])+dungeon[i][j];
    //     }
    // }

    //   int ans=dp[n-1][m-1];
    // //  return ans;

    // //print dp
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //   if(ans>0)
    //   return 0;
    //   else
    //   return -(ans)+1;
  }

  return 0;
}