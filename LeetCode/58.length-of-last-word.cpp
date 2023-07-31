/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {

        int ans = 0;
        int ans1 = 0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i] == ' ' && ans > 0) return ans;
            if(s[i] != ' ') ans++;

           
           

        }
        return ans;
        
    }
};
// @lc code=end

