/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int allproduct = 1;

        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            allproduct *= nums[i];
        }

        vector<int> ans(n);

        for(int i=0;i<n;i++)
        {

            if(nums[i]==0)
            {
                int product = 1;
                for(int j=0;j<n;j++)
                {
                    if(j!=i)
                        product *= nums[j];
                }
                ans[i] = product;
            }
            else
            {
                ans[i] = allproduct/nums[i];
            }
           
        }

        return ans;


       
        
        
    }
};
// @lc code=end

