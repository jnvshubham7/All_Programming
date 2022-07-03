/*
 * @lc app=leetcode id=140 lang=cpp
 *
 * [140] Word Break II
 */

// @lc code=start
class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<string> res;
        vector<string> tmp;
        dfs(s, dict, res, tmp);
        return res;
        
    }

    void dfs(string s, unordered_set<string>& dict, vector<string>& res, vector<string>& tmp) {
        if (s.empty()) {
            string str = "";
            for (int i = 0; i < tmp.size(); i++) {
                str += tmp[i];
                if (i != tmp.size() - 1) {
                    str += " ";
                }
            }
            res.push_back(str);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            string str = s.substr(0, i + 1);
            if (dict.find(str) != dict.end()) {
                tmp.push_back(str);
                dfs(s.substr(i + 1), dict, res, tmp);
                tmp.pop_back();
            }
        }
    }
};
// @lc code=end

