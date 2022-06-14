/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

         vector<int> result;
        priority_queue<pair<int,int>> pq;                  // this is our heap
        unordered_map<int,int> mp;                         // hash map to store the frequency of an element             
        int ctr=1;
        for(int i=0;i<nums.size();i++){                    // binds the frequency to its respective element       
            mp[nums[i]]++;
        }       
        for(auto &it: mp){                           // stores the key value pair to heap such that it sorted by the value ie frequency
            pq.push(make_pair(it.second,it.first));
        }
        while((ctr<=k)){
            result.push_back(pq.top().second);
            pq.pop();
            ctr++;
        }
        return result;
        
    }
};
// @lc code=end

