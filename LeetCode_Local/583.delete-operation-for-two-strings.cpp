/*
 * @lc app=leetcode id=583 lang=cpp
 *
 * [583] Delete Operation for Two Strings
 */

// @lc code=start
class Solution {
public:

  int lcs(string s1,string s2){
    int n=s1.size();
    int m=s2.size();

    int dp[n+1][m+1];

    memset(dp,0,sizeof(dp));

    for(int i=0;i<=m;i++)
    {
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];

            }

            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[n][m];




  }

    int minDistance(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
 
        
      

        int ans=lcs(s1,s2);
        //return ans;

        return(n+m-2*ans);
        
    }
};
// @lc code=end











#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int t;
    cin>>t;
    while(t--)
    {

    

string s1,s2;
cin>>s1>>s2;
 int n=s1.size();
    int m=s2.size();

    int dp[n+1][m+1];

    memset(dp,0,sizeof(dp));

    for(int i=0;i<=m;i++)
    {
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];

            }

            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    

   // cout<<dp[n][m]<<endl;

   //print dp
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    

    }



    return 0;
}