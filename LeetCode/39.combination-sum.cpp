/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:

    vector<vector<int>> combinationSum(vector<int>& v, int tar) {

        int sum=0;
        vector<int> temp;
        vector<vector<int>> ans;

        rec(v, tar, sum, temp, ans, 0);

        return ans;

     

        
    }


    void rec(vector<int>& v, int tar, int sum, vector<int> temp, vector<vector<int>> &ans, int i)
    {

        if(sum>tar)
        {
            return;
        }

        if(sum==tar)
        {
            ans.push_back(temp);
            return;
        }

        for(int j=i; j<v.size(); j++)
        {
            temp.push_back(v[j]);
            rec(v, tar, sum+v[j], temp, ans, j);
            temp.pop_back();
        }

        
      
    }






};

// @lc code=end


