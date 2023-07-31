/*
 * @lc app=leetcode id=692 lang=cpp
 *
 * [692] Top K Frequent Words
 */

// @lc code=start

class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
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

    vector<string> topKFrequent(vector<string>& words, int k) {

        int n=words.size();

        unordered_map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[words[i]]++;
        }

        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        for(auto it=m.begin();it!=m.end();it++)
        {
            pq.push({it->second,it->first});
        }

        vector<string> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;


        

      

        
    }
};
// @lc code=end

