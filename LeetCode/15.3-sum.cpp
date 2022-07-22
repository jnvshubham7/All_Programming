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
            {
                continue;
            }

            int left=i+1;
            int right=n-1;

            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                    v.pb({nums[i],nums[left],nums[right]});
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

                else if(sum<0)
                {
                    left++;
                }

                else 
                {
                    right--;
                }


            }

          
        }


        return v;

    }

 

};
// @lc code=end

