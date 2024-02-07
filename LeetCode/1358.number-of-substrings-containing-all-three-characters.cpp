/*
 * @lc app=leetcode id=1358 lang=cpp
 *
 * [1358] Number of Substrings Containing All Three Characters
 */

// @lc code=start
class Solution {
public:
    int numberOfSubstrings(string s) {

        int  n=s.size();

        int l=0, r=0, cnt=0;
        unordered_map<char,int> mp;


        while(r<n)
        {
            mp[s[r]]++;

            while(mp['a']>0 && mp['b']>0 && mp['c']>0 )
            {
                cnt+=n-r;

                mp[s[l]]--;
                l++;
            }

            r++;


        }

        return cnt;
        
    }
};
// @lc code=end

