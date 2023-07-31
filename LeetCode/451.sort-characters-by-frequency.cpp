/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {

        int n=s.size();
        if(n==0)
            return "";
        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        
        string ans="";
        while(!pq.empty())
        {
            int cnt=pq.top().first;
            char ch=pq.top().second;
            while(cnt--)
            {
                ans+=ch;
            }
            pq.pop();
        }

        return ans;


        
    }
};
// @lc code=end

