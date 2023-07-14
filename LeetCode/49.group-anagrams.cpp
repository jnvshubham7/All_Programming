/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
       

        unordered_map<string, vector<string>> mp;

        for(auto s : strs){
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }

        for(auto m : mp){
            ans.push_back(m.second);
        }

        return ans;

       

    }

   
};
// @lc code=end

