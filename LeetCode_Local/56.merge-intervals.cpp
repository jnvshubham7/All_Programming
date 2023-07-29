/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
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

    vector<vector<int>> merge(vector<vector<int>>& arr) {

        vector<vector<int>> result;
       
        if(arr.size()==0)return result;
        
        sort(arr.begin(),arr.end());

        int start=arr[0][0];

        int end=arr[0][1];

        for(int i=1;i<arr.size();i++)
        {
            if(arr[i][0]<=end)
            {
                end=max(end,arr[i][1]);
            }
            else
            {
                result.push_back({start,end});
                start=arr[i][0];
                end=arr[i][1];
            }
        }

        result.push_back({start,end});



        


       
      
        return result;
    

      
    }
};
// @lc code=end

