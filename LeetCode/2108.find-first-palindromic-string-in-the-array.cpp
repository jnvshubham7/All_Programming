/*
 * @lc app=leetcode id=2108 lang=cpp
 *
 * [2108] Find First Palindromic String in the Array
 */

// @lc code=start
class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        string ans="";

        for(auto word:words){
            if(isPalindrome(word)){
               ans = word;
                break;
            }
        }

        return ans;


        
    }

    bool isPalindrome(string s){
        int i=0,j=s.size()-1;

        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
// @lc code=end

