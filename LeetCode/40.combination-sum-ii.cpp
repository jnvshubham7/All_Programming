/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        set<
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
            solve(candidates, target - candidates[i], i+1, cur, ans);
            cur.pop_back();
        }
    }
};
// @lc code=end

