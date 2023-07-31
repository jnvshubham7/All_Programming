/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int cnt = 0;
        int ans=0;

        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                ans = nums[i];
            }
            if(nums[i] == ans){
                cnt++;
            }
            else{
                cnt--;
            }
           
        }

        return ans;


// time complexity: O(n)
// space complexity: O(1)


    }
};
// @lc code=end



