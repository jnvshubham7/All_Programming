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
        for(auto i:mp)
        {
            if(mp[i].second%2==0)
            {
                sum+=mp[i].second;
            }

            else if(mp[i].second%2!=0)
            {
                sum+=mp[i].second;
                sum+=1;
            }
        }

        return sum;
        
    }
};
// @lc code=end

