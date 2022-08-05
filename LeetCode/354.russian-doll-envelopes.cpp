/*
 * @lc app=leetcode id=354 lang=cpp
 *
 * [354] Russian Doll Envelopes
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

    int maxEnvelopes(vector<vector<int>>& e) {

        int n=e.size();
        int l=e[0].size();



        sort(e.begin(),e.end(),[](vector<int>&a,vector<int>&b)
       {
          if(a[0]==b[0])
          {
              return a[1]<b[1];
          }
            return a[0]<b[0];
         });

         //print e
            // for(int i=0;i<n;i++)
            // {
            //     for(int j=0;j<l;j++)
            //     {
            //         cout<<e[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            // cout<<endl;
       

        vector<ll> dp(n,1);
       
        ll mxx=0;
        for(int i=1;i<n;i++){
           
            for(int j=0;j<i;j++){
                // cout<<"i="<<i<<" j="<<j<<endl;
                if(e[i][0]>e[j][0] && e[i][1]>e[j][1]){
                    //cout<<"i="<<i<<" j="<<j<<endl;
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            // mxx=max(mxx,dp[i]);
           
        }


        //print dp
        // for(int i=0;i<n;i++)
        // {
        //    // cout<<dp[i]<<" ";
        // }
        // cout<<endl;
       
       return *max_element(all(dp));
       












    //   map<pair<int,int>,int> m;
    //     for(int i=0;i<n;i++)
    //     {
    //        m[{envelopes[i][0],envelopes[i][1]}]=i;
           
    //     }

    //     int cnt=0;

    //     for(auto it:m)
    //     {
    //         int x=it.first.first;
    //         int y=it.first.second;
    //         if(it.first.first)
           
    //     }

    //     //print the map
    //     for(auto it=m.begin();it!=m.end();it++)
    //     {
    //        // cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
    //     }
        
    //     return 0;
       
    }
};
// @lc code=end

