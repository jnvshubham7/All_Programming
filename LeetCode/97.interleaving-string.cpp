/*
 * @lc app=leetcode id=97 lang=cpp
 *
 * [97] Interleaving String
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

   

    bool isInterleave(string s1, string s2, string s3) {

        int m = s1.size();
        int n = s2.size();
        int l = s3.size();

       vector<vector<int>> dp(m+1,vector<int>(n+1,-1));


        if(m+n != l) return false;

       return  rec(s1,s2,s3,0,0,0,dp);
        



      
       
    }

    bool rec(string s1, string s2, string s3, int i, int j, int k, vector<vector<int>> &dp){
       
       if(dp[i][j] != -1) return dp[i][j];
       
        if(k == s3.size()) return  true;
        if(i == s1.size() && j == s2.size()) return dp[i][j] = true;
        if(i < s1.size() && s1[i] == s3[k]){
            if(rec(s1,s2,s3,i+1,j,k+1,dp)) return dp[i][j] = true;
        }
        if(j < s2.size() && s2[j] == s3[k]){
            if(rec(s1,s2,s3,i,j+1,k+1,dp)) return dp[i][j] = true;
        }
        if(i<s1.size() && j<s2.size() && s1[i] == s3[k] && s2[j] == s3[k]){

            if(rec(s1,s2,s3,i+1,j,k+1,dp) || rec(s1,s2,s3,i,j+1,k+1,dp)) return dp[i][j] = true;
           
        }
        return dp[i][j] = false;

    }


};
// @lc code=end





int main(){
Solution s;


    // Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"

    string s1 = "aabcc";
    string s2 = "dbbca";
    string s3 = "aadbbcbcac";
    s.isInterleave(s1,s2,s3);


    return 0;
}




























//   if (m + n != k) return false;
       
//         int dp[m+1][n+1];
//         mem(dp,0);
//         dp[0][0] = true;
//         for (int i = 1; i <= m; i++) {
//             dp[i][0] = dp[i - 1][0] && (s1[i - 1] == s3[i - 1]);

//         //     cout<<dp[i-1][0]<<" "<<dp[i][0]<<endl;

//         //   cout<<s1[i-1]<<" "<<s3[i-1]<<endl;
            
            
//         }
//         cout<<endl;
//         // for(int i=0;i<=m;i++){
//         //     for(int j=0;j<=n;j++){
//         //         cout<<dp[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }
//         // cout<<endl;
//         for (int j = 1; j <= n; j++) {
//             dp[0][j] = dp[0][j - 1] && (s2[j - 1] == s3[j - 1]);

//             // cout<<dp[0][j-1]<<" "<<dp[0][j]<<endl;

//             // cout<<s2[j-1]<<" "<<s3[j-1]<<endl;
//         }
//         cout<<endl;
//         // for(int i=0;i<=m;i++){
//         //     for(int j=0;j<=n;j++){
//         //         cout<<dp[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }
//         // cout<<endl;

//         for (int i = 1; i <= m; i++) {
//             for (int j = 1; j <= n; j++) {
//                 dp[i][j] = (dp[i - 1][j] && (s1[i - 1] == s3[i + j - 1])) || (dp[i][j - 1] && (s2[j - 1] == s3[i + j - 1]));
//                 // cout<<dp[i-1][j]<<" "<<dp[i][j]<<endl;
//                 // cout<<s1[i-1]<<" "<<s3[i+j-1]<<endl;
//             }
//             cout<<endl;
//         }
//         cout<<endl;
        


//         //print whole dp
//         // for(int i=0;i<=m;i++){
//         //     for(int j=0;j<=n;j++){
//         //         cout<<dp[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }

//          return dp[m][n];

//         // return dp[m][n];