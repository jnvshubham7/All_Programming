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

    string reorganizeString(string s) {

        int n = s.size();

        unordered_map<char, int> m;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }



        priority_queue<pair<int, char>> pq;
        for (auto it = m.begin(); it != m.end(); it++) {
            pq.push(mp(it->second, it->first));
        }






        string ans = "";
        while (pq.size() > 1) {
            int top1_i = pq.top().first;
            char top1_c = pq.top().second;
            pq.pop();

            int top2_i = pq.top().first;
            char top2_c = pq.top().second;
            pq.pop();

            ans+=top1_c;
            ans+=top2_c;
            top1_i--;
            top2_i--;
            if (top1_i > 0) {
                pq.push(mp(top1_i, top1_c));
            }
            if (top2_i > 0) {
                pq.push(mp(top2_i, top2_c));
            }

            
        }

        if(!pq.empty()){
           if(pq.top().first>1){
               return "";
           }
              ans+=pq.top().second;
        }

        return ans;
       
        
    }

};
// @lc code=end

