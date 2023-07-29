/*
 * @lc app=leetcode id=1220 lang=cpp
 *
 * [1220] Count Vowels Permutation
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
#define vvi vector<vector<int>>
#define M 1000000007


#define k 20001


    

    int countVowelPermutation(int n) {

        ll cnt=0;
        vector<vector<int>> dp(n+1, vector<int> (26,-1));

        

       cnt+=solve(1,'a', n, dp);
         cnt+=solve(1,'e', n, dp);
            cnt+=solve(1,'i', n, dp);
                cnt+=solve(1,'o', n, dp);
                    cnt+=solve(1,'u', n, dp);



        return cnt%M;


    
        
    }

    ll solve(int i, char curr, int n, vector<vector<int>> &dp)
    {
        if(i==n)
        {
            return 1;

        }

        if(dp[i][curr - 'a']!=-1)
        {
            return dp[i][curr - 'a'];
        }


        ll cnt=0;
       
            if(curr=='a')
            {
              cnt+=solve(i+1,'e',n,dp);
                

            }

           

            if(curr=='e')
            {
                cnt+=solve(i+1,'i',n,dp);
                cnt+=solve(i+1,'a',n,dp);
            }

            if(curr=='i')
            {
                cnt+=solve(i+1,'o',n,dp);
                cnt+=solve(i+1,'a',n,dp);
                cnt+=solve(i+1,'e',n,dp);
                cnt+=solve(i+1,'u',n,dp);
            }

            if(curr=='o')
            {
                
                cnt+=solve(i+1,'i',n,dp);
                cnt+=solve(i+1,'u',n,dp);
            }

            if(curr=='u')
            {
              cnt+=solve(i+1,'a',n,dp);
                
            }


        

        return dp[i][curr-'a']=cnt%M;




    }





};
// @lc code=end









