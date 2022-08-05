/*
 * @lc app=leetcode id=1356 lang=cpp
 *
 * [1356] Sort Integers by The Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        int n=arr.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            int x=arr[i];
            while(x)
            {
                if(x&1)
                {
                    cnt++;
                }
                x=x>>1;
            }
            v.push_back(make_pair(cnt,arr[i]));
        }
        sort(v.begin(),v.end());
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            res.push_back(v[i].second);
        }
        return res;
        
       
    }
};
// @lc code=end

