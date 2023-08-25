/*
 * @lc app=leetcode id=2810 lang=cpp
 *
 * [2810] Faulty Keyboard
 */

// @lc code=start
class Solution {
public:
    string finalString(string s) {

        int n = s.size();

        string ans = "";

        for(auto ch:s)
        {
            if(ch!='i')
            {
                ans+=ch;
            }
            else
            {
               reverse(ans.begin(),ans.end());
            }
        }

        return ans;
        
    }
};
// @lc code=end

