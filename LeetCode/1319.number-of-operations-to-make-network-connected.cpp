/*
 * @lc app=leetcode id=1319 lang=cpp
 *
 * [1319] Number of Operations to Make Network Connected
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

    int makeConnected(int n, vector<vector<int>>& connections) {

        vi parent(n);
        fr(i,n) parent[i]=i;

        int compo=0;

        fr(i,connections.size())
        {
            int a=connections[i][0];
            int b=connections[i][1];
            int pa=find(a,parent);
            int pb=find(b,parent);
            if(pa!=pb)
            {
                parent[pa]=pb;
                compo++;
            }
        }

        if(connections.size()<n-1) return -1;
        return n-1-compo;


    }

    int find(int a,vi& parent)
    {
        if(a==parent[a]) return a;
        return parent[a]=find(parent[a],parent);
    }

};
// @lc code=end

