/*
 * @lc app=leetcode id=1995 lang=cpp
 *
 * [1995] Count Special Quadruplets
 */

// @lc code=start
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {

        //use two pointer technique

        int n = nums.size();
        sort(nums.begin(),nums.end());

        int cnt=0;

        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                for(int k=j+1;k<n-1;k++)
                {
                    int x=nums[i]+nums[j]+nums[k];
                   
                    if(binary_search(nums.begin()+k+1,nums.end(),x))
                    {
                        cnt++;
                    }
                }
            }
        }

        return cnt;

       



        
    }
};
// @lc code=end

