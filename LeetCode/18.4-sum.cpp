/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
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

    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        ll n = nums.size();

        vector<vector<int>> ans;
        if(nums.size() < 4) return ans;

        sort(all(nums));
        for(ll i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }

            for(ll j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    continue;
                }
                ll left=j+1;
                ll right=n-1;

                while(left<right)
                {
                    ll sum=1ll*nums[i]+1ll*nums[j]+1ll*nums[left]+1ll*nums[right];
                    if(sum==target)
                    {
                        ans.pb({nums[i],nums[j],nums[left],nums[right]});
                        while(left<right && nums[left]==nums[left+1])
                        {
                            left++;
                        }
                        while(left<right && nums[right]==nums[right-1])
                        {
                            right--;
                        }
                        left++;
                        right--;
                    }
                    else if(sum<target)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                    }
                }
                    
                }

                return ans;
            
            
        



        
    }
};
// @lc code=end

