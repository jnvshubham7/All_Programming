/*
 * @lc app=leetcode id=1239 lang=cpp
 *
 * [1239] Maximum Length of a Concatenated String with Unique Characters
 */

// @lc code=start
class Solution {
public:
    int maxLength(vector<string>& arr) {

        string existChars = "";

        string output = "";

       int n=arr.size();

         solve(arr, 0, output, existChars, n);

        return ans;

      


        
    }

    

};
// @lc code=end

