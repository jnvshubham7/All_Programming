/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string str, string pat) {

         if (pat.length() > str.length()) {
            return {};
        }
        
        vector<int> res;
        
        int counts[26];
        for (int i = 0; i < 26; i++) {
            counts[i] = 0;
        }
        for (int i = 0; i < pat.length(); i++) {
            counts[pat[i] - 'a']++;
        }
        
        int i = 0;
        int j = 0;
        while (j < str.length()) {
            // calculations
            counts[str[j] - 'a']--;
            // create sliding window
            if (j - i + 1 < pat.length()) {
                j++;
            }
            // sliding window created
            else if (j - i + 1 == pat.length()) {
                // get answer from calculations
                bool includeThis = true;
                for (int i = 0; i < 26; i++) {
                    if (counts[i] != 0) {
                        includeThis = false;
                    }
                }
                if (includeThis) {
                    res.push_back(i);
                }
                // move the sliding window
                counts[str[i] - 'a']++;
                i++;
                j++;
            }
        }
                
        return res;
        
    }
};
// @lc code=end

