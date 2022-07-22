/*
 * @lc app=leetcode id=1143 lang=cpp
 *
 * [1143] Longest Common Subsequence
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

    int longestCommonSubsequence(string text1, string text2) {

        int n1=text1.size();
        int n2=text2.size();
        int dp[n1+1][n2+1];
        mem(dp,0);
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(text1[i]==text2[j]){
                    dp[i+1][j+1]=dp[i][j]+1;
                }
                else{
                    dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[n1][n2];

        
    }
};
// @lc code=end

