/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {

        int n=s.size();

       unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
        
    }
};
// @lc code=end

