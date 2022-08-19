/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
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

    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<pair<int,int>> v;
        for(auto i:intervals)
        {
            v.pb({i[0],i[1]});
        }

        sort(all(v));
        vector<vector<int>> ans;

        int s=v[0].first,e=v[0].second;
       
       for(int i=1;i<v.size();i++)
       {
           if(v[i].first<=e)
           {
               e=max(e,v[i].second);
           }
           else
           {
               ans.pb({s,e});
               s=v[i].first;
               e=v[i].second;
           }
       }
         ans.pb({s,e});
        return ans;




        
    }
};
// @lc code=end

