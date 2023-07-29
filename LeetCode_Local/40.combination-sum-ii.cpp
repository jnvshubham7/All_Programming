/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:

  
     set<vector<int>> s;

     

      void combinationSumHelper(const vector<int>& candidates, int target, int index, vector<int>& current, vector<vector<int>>& result) {
       
        if (target == 0) {
            if(s.find(current)==s.end())
            {
                result.push_back(current);
                s.insert(current);
            }
            return;
        }

        if (target < 0 || index == candidates.size()) {
            return;
        }

        // Include the current candidate
        current.push_back(candidates[index]);

        combinationSumHelper(candidates, target - candidates[index], index+1, current, result);
        current.pop_back();

        // Exclude the current candidate
        combinationSumHelper(candidates, target, index + 1, current, result);
    }



    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        combinationSumHelper(candidates, target, 0, cur, ans);
        return ans;
   
   
      
       
        
    

   


    }

   
};
// @lc code=end

