/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {

       

       return rec(nums,0,nums.size()-1);

      
    }

    bool rec(vector<int>& nums,int i,int n)
    {
        if(i==n)
        {
            return true;
        }
        if(i>n)
        {
            return false;
        }
        for(int j=1;j<=nums[i];j++)
        {
            if(rec(nums,i+j,n))
            {
                return true;
            }
        }
        return false;
    }


   
};
// @lc code=end

