/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {

            unordered_map<int,int> m;

      

        int n = s.length();

        for(int i=0;i<n;i++){
            m[s[i]]++;
        }

        bool single = false;

        int cnt=0;


        for(auto x:m)
        {
            if(x.second==1)
            {
                cnt++;
                single = true;
                
            }
        }

        if(cnt>1)
        {
            return false;
        }

        
        if(isPalindrome(s) && single ){
           return true;
        }
        else{
            return false;
        }



}

bool isPalindrome(string s){
    int n = s.length();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

        
    }
};
// @lc code=end

