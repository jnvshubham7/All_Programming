/*
 * @lc app=leetcode id=719 lang=cpp
 *
 * [719] Find K-th Smallest Pair Distance
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

    int smallestDistancePair(vector<int>& nums, int k) {

        int n=nums.size();

        sort(all(nums));
        priority_queue<ppi,vector<ppi>,greater<ppi>>pq;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                pq.push(mp(abs(nums[i]-nums[j]),mp(nums[i],nums[j])));
            }
        }

        //print pq
        // for(int i=0;i<n;i++)
        // {
        //     cout<<pq.top().second.first<<" "<<pq.top().second.second<<" "<<pq.top().first<<endl;
        //     pq.pop();
        // }

    int ans=0;
    while(k--)
    {
        ans=pq.top().first;
        pq.pop();
    }
    return ans;



        
    }
};
// @lc code=end

