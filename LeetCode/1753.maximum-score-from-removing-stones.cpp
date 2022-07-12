/*
 * @lc app=leetcode id=1753 lang=cpp
 *
 * [1753] Maximum Score From Removing Stones
 */

// @lc code=start
class Solution {
public:
    int maximumScore(int a, int b, int c) {

        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);

        int cnt=0;
        while(pq.size()>1 && pq.top()>0) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int c = pq.top();
            pq.pop();
            a--;
            b--;
           // c--;
            pq.push(a);
            pq.push(b);
            pq.push(c);
            cnt++;
            if(a==0 && b==0 || b==0 && c==0 || c==0 && a==0) {
                break;
            }

        }

        return cnt;
        
    }
};
// @lc code=end

