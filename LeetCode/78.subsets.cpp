/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

         vector<vector<int>> ans;
        vector<int> temp;
        ans.push_back(temp);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int size = ans.size();
            for(int j = 0; j < size; j++)
            {
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};
// @lc code=end

