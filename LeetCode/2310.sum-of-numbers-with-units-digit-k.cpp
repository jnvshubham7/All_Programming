/*
 * @lc app=leetcode id=2310 lang=cpp
 *
 * [2310] Sum of Numbers With Units Digit K
 */

// @lc code=start
class Solution {
public:

 int solve(vector<int>& coins, int amount)
 {
   
  vector<int> dp(amount + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 0; i <= amount; i++) {
    for (int j = 0; j < coins.size(); j++) {
      if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
        dp[i] = min(dp[i], dp[i - coins[j]] + 1);

       // cout<<i<<" "<<dp[i]<<endl;

       // print dp[i]
        // for (int i = 0; i < dp.size(); i++) {
        //   cout << i << " " << dp[i]<<" ";
        //     cout<<endl;
        // }

      }

    }
  }




  return dp[amount] == INT_MAX ? -1 : dp[amount];
 }

  int minimumNumbers(int num, int k) {

    vector<int> v;

    for (int i = 0; i <= num; i++) {
      if (i % 10 == k) {
        v.push_back(i);
      }
    }

    // for(int i=0;i<v.size();i++)
    // {
    //   cout<<v[i]<<" ";

    // }

    return solve(v,num);
  }
};
// @lc code=end







#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  int num, k;
  cin >> num >> k;

  vector<int> v;

  for (int i = 0; i <= num; i++) {
    if (i % 10 == k) {
      v.push_back(i);
    }
  }

  // print v
  //  for(int i=0;i<v.size();i++)
  //  {
  //      cout<<v[i]<<" ";
  //  }
  //  cout<<endl;

  vector<int> coins;

  coins = v;

  int n = coins.size();
  int m = amount;

  vector<int> dp(amount + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 0; i <= amount; i++) {
    for (int j = 0; j < coins.size(); j++) {
      if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
        dp[i] = min(dp[i], dp[i - coins[j]] + 1);

        // print dp[i]
        for (int i = 0; i < dp.size(); i++) {
          cout << i << " " << dp[i] << endl;
        }
      }
    }
  }
  return dp[amount] == INT_MAX ? -1 : dp[amount];

  return 0;
}