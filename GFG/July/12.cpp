
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>
  




class Solution {
  public:

   int dp[501][501];

    int shortestUnSub(string S, string T) {

      memset(dp,-1 ,sizeof(dp));

      int ans = solve(S,T,0,0);

      if(ans>=1000)
        return -1;
      else
        return ans;

     
    }

    

   int solve(string& s, string& t, int i, int j)
    {
        if(i >= s.size())
        return 1000;
        
        if(j >= t.size())
        return 1;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int k = j;
        for(; k < t.size(); k++)
        {
            if(t[k] == s[i])
            {
                break;
            }
        }
        
        if(k == t.size()) return 1; // this character is not present in t
        
        int ans1 = solve(s, t, i + 1, j);
        int ans2 = 1 + solve(s, t, i + 1, k + 1);
        
        return dp[i][j] = min(ans1, ans2);
        
        
    }
};






int main(){
Solution s;


//   Input:
// S = "babab"
// T = "babba"

 string S = "babab";
  string T = "babba";

cout<<s.shortestUnSub(S,T)<<endl;
  s.shortestUnSub(S,T);
 


  return 0;
}