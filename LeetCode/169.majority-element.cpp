/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {

       unordered_map<int,int> m;

         for(int i=0;i<nums.size();i++)
         {
              m[nums[i]]++;
         }

            for(auto i:m)
            {
                if(i.second>nums.size()/2)
                {
                    return i.first;
                }
            }
            return 0;

            

       // TC O(n)
       // SC O(n)
       
            
       





    }
};
// @lc code=end



