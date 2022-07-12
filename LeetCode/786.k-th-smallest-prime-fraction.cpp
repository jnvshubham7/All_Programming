/*
 * @lc app=leetcode id=786 lang=cpp
 *
 * [786] K-th Smallest Prime Fraction
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

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        int n=arr.size();

       priority_queue<ppd,vector<ppd>,greater<ppd>>pq;

       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
                double d=double(arr[i])/double(arr[j]);
               pq.push(mp(d,mp(arr [i],arr[j])));
           }
       }


      //print pq
    //   while(!pq.empty())
    //   {
    //       ppd p=pq.top();
    //       pq.pop();
    //       cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    //   }

      vector<int> ans;

        for(int i=0;i<k-1;i++)
        {
            ppd p=pq.top();
            pq.pop();
           
        }
        ans.pb(pq.top().second.first);
        ans.pb(pq.top().second.second);
        return ans;
        
    }
};
// @lc code=end

