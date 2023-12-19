/*
 * @lc app=leetcode id=735 lang=cpp
 *
 * [735] Asteroid Collision
 */

// @lc code=start
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {

      
        stack<int> st;
        vector<int> ans;
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > 0) st.push(v[i]);
            else {
                while (!st.empty() && st.top() > 0 && st.top() < abs(v[i])) st.pop();
                if (st.empty() || st.top() < 0) st.push(v[i]);
                else if (st.top() == abs(v[i])) st.pop();
            }
        }
        
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;



        

        

        


        
    }
};
// @lc code=end

