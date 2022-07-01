/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
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

string solve(string s1,string s2)
{
    int n=s1.size();
    int m=s2.size();

    int dp[n+1][m+1];

    int res=0;
    string ans;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
        }
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
                dp[i][j]=0;
            }

            if(dp[i][j]>res)
            {
                string temp=s1.substr(i-dp[i][j],dp[i][j]);
                string rev=temp;
                reverse(rev.begin(),rev.end());

                if(rev==temp)
                {
                    ans=temp;
                res=dp[i][j];

                }
                

            }


        }
    }

    return ans;

}



    string longestPalindrome(string s1) {

        string s2=s1;
        reverse(s2.begin(),s2.end());
      return  solve(s1,s2);

       
        
    }
};
// @lc code=end






int main(){
Solution s;

ll t;
cin>>t;
while(t--){

    


}

    return 0;
}