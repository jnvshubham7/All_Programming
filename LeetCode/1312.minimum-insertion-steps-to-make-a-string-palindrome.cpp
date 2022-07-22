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

      string s1=s;
        reverse(s1.begin(),s1.end());

        string s2=s;

      return   lcs(s1,s2);


         
        
        
    }


    int lcs(string s1,string s2)
    {
      int m=s1.size(),n=s2.size();
      int dp[m+1][n+1];
      fr(i,m+1)
      {
        dp[i][0]=0;
      }
      fr(i,n+1)
      {
        dp[0][i]=0;
      }
      fr(i,m+1)
      {
        fr(j,n+1)
        {
          if(i==0||j==0)
            dp[i][j]=0;
          else if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
          else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
      }
      return n-dp[m][n];
    }



    

   
};
// @lc code=end

