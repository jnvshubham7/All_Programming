/*
 * @lc app=leetcode id=2410 lang=cpp
 *
 * [2410] Maximum Matching of Players With Trainers
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

    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {

        sort(all(p));
        sort(all(t));

        int n=p.size();

        int m=t.size();

        int i=0;
        int j=0;

        int cnt=0;

        while(i<n && j<m)
        {
            if(p[i]<=t[j])
            {
                cnt++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        return cnt;

        
        

        

        
    }
};
// @lc code=end

