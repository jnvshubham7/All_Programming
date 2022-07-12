/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();

        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({score[i], i});
        }

        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                res[pq.top().second] = "Gold Medal";
            } else if (i == 1) {
                res[pq.top().second] = "Silver Medal";
            } else if (i == 2) {
                res[pq.top().second] = "Bronze Medal";
            } else {
                res[pq.top().second] = to_string(i + 1);
            }
            pq.pop();
        }

        return res;
        
    }
};
// @lc code=end

