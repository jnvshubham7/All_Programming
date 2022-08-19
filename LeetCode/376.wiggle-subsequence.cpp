/*
 * @lc app=leetcode id=376 lang=cpp
 *
 * [376] Wiggle Subsequence
 */

// @lc code=start
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      int n=nums.size();

     int up=1,down=1;
      for(int i=1;i<n;i++){
          if(nums[i]>nums[i-1]){
              up=down+1;

          
          }

          if(nums[i]<nums[i-1]){
              down=up+1;
          }
      }
      return max(up,down);



      // int maxLen=0;
      // int curLen=0;

      // for(int i=1;i<n;i+=2)
      // {
      //   if((nums[i]-nums[i-1]>0  && nums[i+1]- nums[i] <0) || (nums[i]-nums[i-1]<0 && nums[i+1]- nums[i] >0))
      //   {
      //     curLen+=2;
      //   }
      //   else
      //   {
      //     maxLen=max(maxLen,curLen);
      //     curLen=0;
      //   }
      // }

      // maxLen=max(maxLen,curLen);
      // return maxLen;

    }
};
// @lc code=end

