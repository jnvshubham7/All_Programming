/*
 * @lc app=leetcode id=1636 lang=cpp
 *
 * [1636] Sort Array by Increasing Frequency
 */

// @lc code=start

class cmp{
public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        if(a.first==b.first){
            return b.second>a.second;
        }
        return a.first>b.first;
    }
};



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

    vector<int> frequencySort(vector<int>& nums) {

        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
       //min heap
       priority_queue<pii,vector<pii>,cmp> pq;
        for(auto it:m){
            pq.push(mp(it.second,it.first));
        }
        vector<int> ans;
        while(!pq.empty()){
            int cnt=pq.top().first;
            int val=pq.top().second;
            pq.pop();
            for(int i=0;i<cnt;i++){
                ans.push_back(val);
            }
        }
        return ans;
        
    }
};
// @lc code=end

