/*
 * @lc app=leetcode id=2374 lang=cpp
 *
 * [2374] Node With Highest Edge Score
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

    int edgeScore(vector<int>& edges) {

         int n = edges.size();
        //  vector<vector<int>> graph(n);
        //     fr(i,n)
        //     {
        //         graph[i].pb(edges[i]);
        //     }

        //     ll maxScore = 0;
        //     ll maxIndex = 0;
        //     for(int i=0;i<n;i++)
        //     {
        //         ll score = 0;
        //         fr(j,n)
        //         {
        //            score += graph[i][j];
        //         }
        //         if(score>maxScore)
        //         {
        //             maxScore = score;
        //             maxIndex = i;
        //         }
        //     }
        //     return (int)maxIndex;



        vector<int> adj[n];
        for (int i = 0; i < n; i++) {
            adj[edges[i]].push_back(i);
        }

        //print adj

        // for (int i = 0; i < n; i++) {
        //     cout << i << ": ";
        //     for (int j = 0; j < adj[i].size(); j++) {
        //         cout << adj[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        ll maxScore = 0;
        ll maxIndex = 0;
        for (int i = 0; i < n; i++) {
            ll score = 0;
            for (auto j : adj[i]) {
                score += j;
            }
            if (score > maxScore) {
                maxScore = score;
                maxIndex = i;
            }
        }
        return (int)maxIndex;




        // vector<int> score(n, 0);
        // for (int i = 0; i < n; i++) {
        //     score[i] = edges[i];
        //     for (int j = 0; j < n; j++) {
        //         if (edges[j] == i) {
        //             score[i] += edges[j];
        //         }
        //     }
        // }

        // //print score
        // for (int i = 0; i < n; i++) {
        //     cout << score[i] << " ";
        // }
        // cout << endl;



        // int maxScore = 0;
        // int maxIndex = 0;
        // for (int i = 0; i < n; i++) {
        //     if (score[i] > maxScore) {
        //         maxScore = score[i];
        //         maxIndex = i;
        //     }
        // }
        // return maxIndex;
        
    }
};
// @lc code=end

