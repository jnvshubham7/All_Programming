/*
 * @lc app=leetcode id=2389 lang=cpp
 *
 * [2389] Longest Subsequence With Limited Sum
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

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {

         int n=nums.size();
        int m=queries.size();
        vector<int> ans;

        for(int i=0;i<m;i++)
        {
           int x= maxSub(nums,queries[i]);
              ans.pb(x);

        }
        return ans;
        
    }



     int maxSub(vector<int>& nums, int query)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int sum = 0;
        while(i <= j)
        {
            if(sum + nums[i] <= query)
            {
                sum += nums[i];
                i++;
            }
            else
            {
                j--;
            }
        }
        return i;
    }
};
// @lc code=end

