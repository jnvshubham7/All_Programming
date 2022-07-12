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

        int n = arr.size();

    int sum = 0;

    int cnt=0;

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

       priority_queue<pair<int, int>> pq;
        for (auto it = m.begin(); it != m.end(); it++) {
            pq.push(mp(it->second, it->first));
        }

        //print pq
        // while(!pq.empty()) {
        //     cout << pq.top().first << " " << pq.top().second << endl;
        //     pq.pop();
        // }


       while(!pq.empty()) {
           int x=pq.top().first;
           sum+=x;
           cnt++;
              pq.pop();
              if(sum>=n/2)
                break;

        }

        return cnt;


        
    }
};
// @lc code=end

