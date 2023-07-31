/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
   
    vector<vector<int>> ans;
    vector<int> cur;
    set<vector<int>> s;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        rec(nums, 0, nums.size());

        return ans;

    }

    void rec(vector<int>& nums, int i, int n)
    {
        if(i==n)
        {
            if(s.find(cur)==s.end())
            {
                ans.push_back(cur);
                s.insert(cur);
            }
            return;
        }

        cur.push_back(nums[i]);
        rec(nums, i+1, n);
        cur.pop_back();
        rec(nums, i+1, n);
    }





  
};
// @lc code=end

