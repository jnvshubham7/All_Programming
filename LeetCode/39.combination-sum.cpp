/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;

        vector<int> cur;
        solve(candidates,target, 0, cur, ans);
        return  ans;

        
    }

    void solve(vector<int>& candidates, int target, int start, vector<int>& cur, vector<vector<int>>& ans)
    {
        if(target == 0)
        {
            ans.push_back(cur);
            return;
        }
        if(target < 0)
            return;
        for(int i = start; i < candidates.size(); i++)
        {
            cur.push_back(candidates[i]);
            solve(candidates, target - candidates[i], i, cur, ans);
            cur.pop_back();
        }
    }

};
// @lc code=end

