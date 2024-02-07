/*
 * @lc app=leetcode id=1248 lang=cpp
 *
 * [1248] Count Number of Nice Subarrays
 */

// @lc code=start
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int n=nums.size();

        int l=0, r=0, cnt=0, odd=0;

        while(r<n)
        {
            if(nums[i]%2!=0)
            {
                odd++;
            }

            if(odd==k)
            {
                cnt++;

                if(nums[l]%2!=0){
                    cnt++;
                }
                else {}
            }
        }
        
    }
};
// @lc code=end

