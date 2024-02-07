/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& old, vector<int>& new) {

        int n = old.size();

        for(int i=0;i<n;i++){
            if(new[0] >= old[i][0] && new[0] <=old[i][1])
            {
                //push 
                old.insert(old.begin()+i,new);
            }
        }

        

[]

       
    }
};
// @lc code=end

