/*
 * @lc app=leetcode id=1027 lang=cpp
 *
 * [1027] Longest Arithmetic Subsequence
 */

// @lc code=start
class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {

        int n = nums.size();
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = nums[j]-nums[i];
                int curr = nums[j];
                int curr_cnt = 2;
                for(int k=j+1;k<n;k++){
                    if(nums[k]-curr == diff){
                        curr = nums[k];
                        curr_cnt++;
                    }
                }
                cnt = max(cnt,curr_cnt);
            }
        }

        return cnt;
      
    }
};
// @lc code=end

