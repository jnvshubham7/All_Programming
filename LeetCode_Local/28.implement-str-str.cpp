/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {

         int n=haystack.size(),m=needle.size();
        if(m==0)
            return 0;
        if(n<m)
            return -1;
       // int i=0,j=0;
       //check needle is substring of haystack and print index of first char of needle in haystack use sybstr method
        if(haystack.substr(0,m)==needle)
            return 0;
        for(int i=1;i<n-m+1;i++){
            if(haystack.substr(i,m)==needle)
                return i;
        }
        return -1;
        
    }
};
// @lc code=end

