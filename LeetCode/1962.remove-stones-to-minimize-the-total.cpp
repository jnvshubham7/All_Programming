/*
 * @lc app=leetcode id=1962 lang=cpp
 *
 * [1962] Remove Stones to Minimize the Total
 */

// @lc code=start
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        int n = piles.size();

        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            pq.push(piles[i]);
        }

        for(int i=0;i<k;i++)
        {
           //floor(piles[i] / 2)
            pq.push(pq.top()-floor(pq.top()/2));
              pq.pop();

            
        }
        int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;

        
    }
};
// @lc code=end

