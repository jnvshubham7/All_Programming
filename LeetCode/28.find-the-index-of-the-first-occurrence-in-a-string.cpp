/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {

        int n1 = haystack.length();
        int n2 = needle.length();

        char first = needle[0];

        for(int i = 0; i < n1; i++) {
            if(haystack[i] == first) {
                if(haystack.substr(i, n2) == needle)
                    return i;
            }
        }

        return -1;
        
        //time complexity: O(n1 * n2)
        //space complexity: O(1)
      
    }
};
// @lc code=end

