/*
 * @lc app=leetcode id=901 lang=cpp
 *
 * [901] Online Stock Span
 */

// @lc code=start
class StockSpanner {
public:

   stack<pair<int,int>> s;

    StockSpanner() {

    }
    
    int next(int p) {

      int ans=1;

      while(!s.empty() && s.top().first<=p)
      {
            ans+=s.top().second;
            s.pop();
      }

      s.push({p,ans});

        return ans;

     

        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
// @lc code=end

