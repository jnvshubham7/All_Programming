/*
 * @lc app=leetcode id=1641 lang=cpp
 *
 * [1641] Count Sorted Vowel Strings
 */

// @lc code=start
class Solution {
public:
    int countVowelStrings(int n) {

         vector<int> dp(5, 1);
        for(int i=0; i<n; i++){
            for(int j=1; j<5; j++){
                dp[j] = dp[j-1] + dp[j];
            }
        }
        return dp[4];
        
    }
};
// @lc code=end

