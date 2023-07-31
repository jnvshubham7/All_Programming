/*
 * @lc app=leetcode id=2365 lang=cpp
 *
 * [2365] Task Scheduler II
 */

// @lc code=start
class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
       
       unordered_map<int, int> freq;
        for (int task : tasks) {
            freq[task]++;
        }
        priority_queue<int> pq;
        for (auto it : freq) {
            pq.push(it.second);
        }
        int days = 0;
        while (!pq.empty()) {
            vector<int> temp;
            int i = 0;
            while (i <= space) {
                if (!pq.empty()) {
                    if (pq.top() > 1) {
                        temp.push_back(pq.top() - 1);
                    }
                    pq.pop();
                }
                days++;
                if (pq.empty() && temp.empty()) {
                    break;
                }
                i++;
            }
            for (int t : temp) {
                pq.push(t);
            }
        }
        return days;
    }
};
// @lc code=end

