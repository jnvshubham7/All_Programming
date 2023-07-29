/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
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

    int minSetSize(vector<int>& arr) {

      int n=arr.size();

      unordered_map<int,int> m;
        fr(i,n)
        {
            m[arr[i]]++;
        }

        priority_queue<int> pq;
        for(auto it:m)
        {
            pq.push(it.second);
        }

        int cnt=0;

        int sz=n/2;

        while(!pq.empty())
        {
            cnt++;
            sz-=pq.top();
            pq.pop();
            if(sz<=0) break;
        }
        return cnt;




        
    }
};
// @lc code=end

