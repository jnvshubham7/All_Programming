/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution {
public:
    int findLucky(vector<int>& arr) {

        vector<int> v;

    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++) {
      m[arr[i]]++;
    }

    // check if element is equal to frequency
    for (auto it = m.begin(); it != m.end(); it++) {
      // check if element is equal to frequency then push it in vector
      if (it->second == it->first) {
        v.push_back(it->first);
      }
    }

    // sort vector
    sort(v.begin(), v.end(), greater<int>());
    // if vector is empty then return -1
    if (v.empty()) {
      return -1;
    }
    // return maximum element
    return v[0];
        
    }
};
// @lc code=end

