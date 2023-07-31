/*
 * @lc app=leetcode id=2419 lang=cpp
 *
 * [2419] Longest Subarray With Maximum Bitwise AND
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums) {

       int n=nums.size();

      int maxx_ele=*max_element(nums.begin(),nums.end());

         int cnt=0;

         int max_cnt=0;


         for(int i=0;i<n;i++)
         {
             if(maxx_ele==nums[i])
             {
                    cnt++;
                    
                    max_cnt=max(max_cnt,cnt);


             }

                else
                {
                    cnt=0;
                }



         }


            return max_cnt;


    
        
        
    }
};
// @lc code=end

