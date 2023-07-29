/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
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

    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> ans;
        vector<int> cur;

        rec(ans, cur, n, k, 1);

        return ans;

        
    }

    void rec(vector<vector<int>>& ans, vector<int>& cur, int n, int k, int i)
    {
        // if(cur.size()==k)
        // {
        //     ans.push_back(cur);
        //     return;
        // }

        // for(int j=i;j<=n;j++)
        // {
        //     cur.push_back(j);
        //     rec(ans, cur, n, k, j+1);
        //     cur.pop_back();
        // }  
        if(cur.size()==k)
        {
            ans.push_back(cur);
            return;

        } 

        for(int j=i;j<=n;j++)
        {
            cur.pb(j);
            rec(ans,cur,n,k,j+1);
            cur.pop_back();
            
        }
    }
};
// @lc code=end

