/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 */

// @lc code=start
class Solution {
public:
    int minDistance(string word1, string word2) {

        int n=word1.length();
        int m=word2.length();

       return solve(word1,word2,n,m);


    }

    


};
// @lc code=end

