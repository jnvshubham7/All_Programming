/*
 * @lc app=leetcode id=2367 lang=cpp
 *
 * [2367] Number of Arithmetic Triplets
 */

// @lc code=start
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {

         int cnt=0;
       int n=nums.size();

       for(int i=0;i<n-2;i++)
       {
           for(int j=i+1;j<n-1;j++)
           {
               for(int k=j+1;k<n;k++)
               {
                   if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff)
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

