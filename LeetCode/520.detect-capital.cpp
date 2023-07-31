/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        
         int count=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                count++;
            }
        }
        if(count==word.length()){
            return true;
        }
        if(count==0){
            return true;
        }
        if(count==1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};
// @lc code=end

