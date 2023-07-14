/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
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

    vector<vector<int>> threeSum(vector<int>& nums) {

        int n=nums.size();

        vector<vector<int>> v;

        if(n<3)
        return v;

        sort(all(nums));

        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;

            int l=i+1;
            int r=n-1;

            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];

                if(sum==0)
                {
                    v.pb({nums[i],nums[l],nums[r]});
                    l++;
                    r--;

                    while(l<r && nums[l]==nums[l-1])
                    l++;

                    while(l<r && nums[r]==nums[r+1])
                    r--;
                }
                else if(sum>0)
                r--;
                else
                l++;
            }
        }

        return v;

        
    }



 

};
// @lc code=end

