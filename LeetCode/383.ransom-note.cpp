/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n=ransomNote.size();
        int m=magazine.size();

        unordered_map<char,int> mp;
        for(int i=0;i<m;i++)
        {
            mp[magazine[i]]++;
        }
        unordered_map<char,int> mp1;
        for(int i=0;i<n;i++)
        {
            mp1[ransomNote[i]]++;
        }
        for(char c:ransomNote)
        {
            if(mp[c]<mp1[c])
                return false;
        }
        return true;
        
    }
};
// @lc code=end

