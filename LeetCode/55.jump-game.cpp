/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[i]=nums[i];
        }

        int i=0;
        while(i<n)
        {
            if(mp[i]==0)
            {
                if(i==n-1)
                    return true;
                else
                    return false;
            }
            else
            {
                if(possible(mp,i))
                {
                    i+=mp[i];
                }
                else
                {
                    return false;
                }
                
            }
        }
        return true;

    }
};
// @lc code=end

