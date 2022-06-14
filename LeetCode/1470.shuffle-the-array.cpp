/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */

// @lc code=start
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

         vector<int> ans;
        int i=0;
        int j=n;
        for(int k=0;k<n*2;k++)
        {
            if(k%2==0)
            {
                ans.push_back(nums[i]);
                i++;
            }
            else
            {
                ans.push_back(nums[j]);
                j++;
            }
        }
        return ans;
        
    }
};
// @lc code=end

