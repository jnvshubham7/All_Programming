/*
 * @lc app=leetcode id=990 lang=cpp
 *
 * [990] Satisfiability of Equality Equations
 */

// @lc code=start
class Solution {
public:
    bool equationsPossible(vector<string>& equations) {

       


      int n = equations.size();
        vector<int> parent(n, -1);
        for (int i = 0; i < n; i++) {
            if (equations[i][1] == '=') {
                int x = find(i, parent);
                int y = find(equations[i][0] - 'a', parent);
                parent[x] = y;
            }
        }

        for (int i = 0; i < n; i++) {
            if (equations[i][1] == '!') {
                int x = find(i, parent);
                int y = find(equations[i][0] - 'a', parent);
                if (x == y) {
                    return false;
                }
            }
        }
        return true;
        
    }

    int find(int i, vector<int>& parent) {
        if (parent[i] == -1) {
            return i;
        }
        return parent[i] = find(parent[i], parent);



    }
    
};
// @lc code=end











