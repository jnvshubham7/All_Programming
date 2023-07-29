/*
 * @lc app=leetcode id=1312 lang=cpp
 *
 * [1312] Minimum Insertion Steps to Make a String Palindrome
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
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

    int minInsertions(string s) {

      string rev = s;

      reverse(all(rev));

      return s.length() - lcs(s, rev);

    }

    int lcs(string s1, string s2) {

      int n = s1.length();

      int m = s2.length();

      int dp[n + 1][m + 1];

      fr(i, n + 1) {

        fr(j, m + 1) {

          if (i == 0 || j == 0) {

            dp[i][j] = 0;

          } else if (s1[i - 1] == s2[j - 1]) {

            dp[i][j] = 1 + dp[i - 1][j - 1];

          } else {

            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

          }

        }

      }

      return dp[n][m];

    }

    
};
// @lc code=end

