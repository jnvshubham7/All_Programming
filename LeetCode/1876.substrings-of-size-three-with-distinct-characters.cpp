/*
 * @lc app=leetcode id=1876 lang=cpp
 *
 * [1876] Substrings of Size Three with Distinct Characters
 */

// @lc code=start
class Solution {
public:
    int countGoodSubstrings(string s) {

        int n=s.size();

        vector<string> all_substrings;
        //sliding window
        for(int i=0;i<n-3+1;i++)
        {
            all_substrings.push_back(s.substr(i,3));

        }

        vector<string> good;
        for(int i=0;i<all_substrings.size();i++)
        {
            if(is_good(all_substrings[i]))
            {
                good.push_back(all_substrings[i]);
            }
        }
        return good.size();

        //print all substrings
        for(auto it:all_substrings)
        {
            cout<<it<<endl;
        }

        

        
    }

    bool is_good(string s)
    {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto it:m)
        {
            if(it.second>1)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

