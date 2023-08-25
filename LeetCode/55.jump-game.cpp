/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();

        return rec(n - 1, nums);

        

    }


    bool rec(int n, vector<int>& nums)

    {
        if(n == 0 || n == 1)
        {
            return true;
        }


        bool x1 = rec(n - 1, nums);

        bool x2 = rec(n - 2, nums);


        return x1 || x2;

        

    }
};
// @lc code=end

