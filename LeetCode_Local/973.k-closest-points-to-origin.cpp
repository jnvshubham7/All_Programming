/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
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

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        int n = points.size();

        vector<vector<int>> ans;
        vector<int> indx;
        
        //create min heap which have pair
        priority_queue<pii,vector<pii>,greater<pii>> pq;

        



       



        for(int i=0;i<n;i++)
        {
            int dis = (points[i][0]*points[i][0]+points[i][1]*points[i][1])^(1/2);
            cout<<dis<<endl;
            pq.push({dis,i});

        }

        for(int i=0;i<k;i++)
        {
            indx.push_back(pq.top().second);
            pq.pop();
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(points[indx[i]]);
        }
        return ans;




        
    }
};
// @lc code=end

