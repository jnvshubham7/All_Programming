/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n=strs.size();
        vector<vector<string>> ans;

        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++) {
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);

            //print the map
            // for(auto it=mp.begin();it!=mp.end();it++) {
            //     cout<<it->first<<" "<<"1st"<<endl;
            //     for(auto it2=it->second.begin();it2!=it->second.end();it2++) {
            //         cout<<*it2<<" "<<"2nd"<<" ";
            //     }
            //     cout<<endl;
            // }

           
        }
        for(auto it=mp.begin();it!=mp.end();it++) {
            ans.push_back(it->second);
        }
        return ans;

    }

   
};
// @lc code=end

