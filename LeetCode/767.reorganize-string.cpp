/*
 * @lc app=leetcode id=767 lang=cpp
 *
 * [767] Reorganize String
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

    string reorganizeString(string S) {

        string s ="";

        unordered_map<char,int> mp;

        priority_queue<pair<int,char>>pq;

        for(auto s:S)
        {
            mp[s]++;
        }

        for(auto m:mp)
        {
            pq.push({m.second,m.first});


        }

        while(pq.size()>1)
        {
            auto top1= pq.top();
            pq.pop();

            auto top2 = pq.top();
            pq.pop();

            s+=top1.second;
            s+=top2.second;

            top1.first -=1;

            top2.first-=1;

            if(top1.first>0)
            {
                pq.push(top1);
                            }

                            if(top2.first>0)
                            {
                                pq.push(top2);
                            }






        }

        if(!pq.empty())
        {
            if(pq.top().first >1)
            return "";
            else 
            s+=pq.top().second;
        }

       
        return s;
    }

};
// @lc code=end

