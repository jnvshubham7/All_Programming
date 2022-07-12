/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
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

    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n=nums.size();
       unordered_map<int,int> m;

         for(int i=0;i<n;i++){
              m[nums[i]]++;
         }

         priority_queue<pair<int,int>> pq;
            for(auto it:m){
                pq.push(mp(it.second,it.first));
            }
            vector<int> ans;
            for(int i=0;i<k;i++){
                ans.push_back(pq.top().second);
                pq.pop();
            }
            return ans;

    }

};
// @lc code=end

