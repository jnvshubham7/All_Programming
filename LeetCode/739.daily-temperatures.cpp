/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        vector<int> ans;
        stack<int> s;
        int i=0;
        int j=0;
        while (j<temp.size())
        {
            while(s.size()>0 && temp[s.top()]<temp[j])
            {
                ans[s.top()]=j-s.top();
                s.pop();
            }
            s.push(j);
            j++;
        }
        while(s.size()>0)
        {
            ans[s.top()]=0;
            s.pop();
        }
        return ans;
        
    }
};
// @lc code=end

