/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        //multimap
        multimap<int, int> m;

        for (int i = 0; i < arr.size(); i++) {
            m.insert({abs(arr[i] - x), arr[i]});
        }

        for(auto i : m) {
            cout << i.first << " " << i.second << endl;
        }

        

        vector<int> ans;

        for (auto it = m.begin(); it != m.end(); it++) {
            ans.push_back(it->second);
            if (ans.size() == k) {
                break;
            }
        }

        sort(ans.begin(), ans.end());

        return ans;

        // map<int, int> m;
        // for (int i = 0; i < arr.size(); i++) {
        //     m[abs(arr[i] - x)] = arr[i];
        // }

        // for(auto i : m) {
        //     cout << i.first << " " << i.second << endl;
        // }


        // vector<int> ans;
        // for (auto it: m) {
        //     ans.push_back(it.second);
        // }

        // return ans;

        
    }
};
// @lc code=end

