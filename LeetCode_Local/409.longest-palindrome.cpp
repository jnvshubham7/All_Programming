/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {

        sort(s.begin(),s.end());

        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        int sum=0;
        
        for(auto x:mp)
        {
            
            if(x.second%2==0)
            sum+=x.second;
            else 
            sum+=(x.second-1);
        }

        if(mp.size()==1)
        return s.size();

      else   if(s.size()==sum)
        return sum;
    
        else 
        return sum+1;

        
    }
};
// @lc code=end

