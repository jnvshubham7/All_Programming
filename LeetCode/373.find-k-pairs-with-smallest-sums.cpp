/*
 * @lc app=leetcode id=373 lang=cpp
 *
 * [373] Find K Pairs with Smallest Sums
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

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        int n1=nums1.size();
        int n2=nums2.size();
        vector<vector<int>> ans;

        // map<int,pii> m;

        // for(int i=0;i<n1;i++)
        // {
        //     for(int j=0;j<n2;j++)
        //     {
        //         m[nums1[i]+nums2[j]]={nums1[i],nums2[j]};
        //     }
        // }

    //   vector<int,pii > m;
    //     for(int i=0;i<n1;i++)
    //     {
    //         for(int j=0;j<n2;j++)
    //         {
    //             m.push_back({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
    //         }
    //     }

        //prtint the m

        // for(auto it=m.begin();it!=m.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
        // }

        priority_queue<ppi,vector<ppi>,greater<ppi>> pq;

        

        // for(int i=0;i<n1;i++)
        // {
        //     for(int j=0;j<n2;j++)
        //     {
        //         pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
        //     }
        // }

       // print the pq
    //    while(!pq.empty())
    //    {
    //          cout<<pq.top().first<<" "<<pq.top().second.first<<" "<<pq.top().second.second<<endl;
    //             pq.pop();
    //    }


        for(int i=0;i<k;i++)
        {
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
            if(pq.empty()) break;
        }





        

       
        return ans;


        


        
        
    }
};
// @lc code=end

