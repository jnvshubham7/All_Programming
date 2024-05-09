/*
 * @lc app=leetcode id=3090 lang=cpp
 *
 * [3090] Maximum Length Substring With Two Occurrences
 */

// @lc code=start
class Solution {
public:
    int maximumLengthSubstring(string s) {

        int n = s.size();

        int i=0, j=0, ans=0, count=0;

        unordered_map<char, int> mp;

        while(j<n) {
            mp[s[j]]++;

            while(mp[s[j]] > 2) {
                mp[s[i]]--;
               

               i++;
            }

            ans = max(ans, j-i+1);

            j++;


            
        }

        return ans;
        
    }
};
// @lc code=end

