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
        dfs(candidates,target, 0, cur, ans);
        return  ans;

        
    }

    void dfs(vector<int>& candidates, int target, int start, vector<int>& cur, vector<vector<int>>& ans)
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
            dfs(candidates, target - candidates[i], i, cur, ans);
            cur.pop_back();
        }
    }

};




    //     vector<vector<int>> ans;
    //     vector<int> output;
    //     solve(candidates, target, 0, output, ans);
    //     return ans;
        


    // }

    // void solve(vector<int>& cand, int tar, int index, vector<int> &temp, vector<vector<int>>&a ){
     

    // }






    // void solve(vector<int>& cand, int tar, int index, vector<int> &temp, vector<vector<int>>&a ){
    //   //base
    //   // if(index==cand.size()){


    //     if(tar==0){
    //       a.push_back(temp);
    //       return;
    //     }

    //     // if(tar<0){
    //     //   return;
    //     // }
        


        



    //   // }


    //   if(cand[index]<=tar){
    //     temp.push_back(cand[index]);
    //     solve(cand, tar-cand[index], index, temp, a);
    //     temp.pop_back();
    //   }
    //   solve(cand, tar, index+1, temp, a);
    // } 
    


    


// };
// @lc code=end

