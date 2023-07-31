/*
 * @lc app=leetcode id=823 lang=cpp
 *
 * [823] Binary Trees With Factors
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

    int numFactoredBinaryTrees(vector<int>& arr) {\
    int mod=1000000007;
    map<int,long>mp;
     sort(arr.begin(),arr.end());
     mp[arr[0]]=1;
     for(int i=1;i<arr.size();i++)
     {
         long count=1;
         for(auto x:mp)
         {
             int ele=x.first;
        if(arr[i]%ele==0 && mp.find(arr[i]/ele)!=mp.end())
        {
            count+=mp[ele] * mp[arr[i]/ele];
        }
         }
         mp[arr[i]]=count;
             
     }
    int ans=0;
      for(auto x:mp)
      {
         ans=(ans+x.second)%mod;
          
      }
        return ans;
    }
};
// @lc code=end

