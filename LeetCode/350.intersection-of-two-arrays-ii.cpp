/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        unordered_map<int, int> m;
        for (auto i : nums1) {
            m[i]++;
        }
       for(auto it = m.begin(); it != m.end(); it++) {
          // cout << it->first << " " << it->second << endl;
       }         
        for (auto i : nums2) {
            if (m[i] > 0) {
                res.push_back(i);
                
                m[i]--;

                //print map
                for(auto it = m.begin(); it != m.end(); it++) {
                   // cout << it->first << " " << it->second << endl;
                }
                cout << endl;
                
            }
        }


        return res;
        
    }
};
// @lc code=end

