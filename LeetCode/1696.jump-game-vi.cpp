/*
 * @lc app=leetcode id=1696 lang=cpp
 *
 * [1696] Jump Game VI
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

    int maxResult(vector<int>& nums, int k) {

        int n=nums.size();

        

         
        int dp[n];
        priority_queue<pii> pq;
        
        for(int i=n-1 ; i>=0 ; i--)
        {
            while(pq.size() && pq.top().second>i+k)
                pq.pop();
            
            dp[i]=nums[i];
            dp[i]+=(pq.size() ? pq.top().first : 0);
            pq.push({dp[i], i});
        }
        
        return dp[0];

        


        
    }
};
// @lc code=end

