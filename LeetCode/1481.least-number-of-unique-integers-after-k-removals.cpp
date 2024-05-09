/*
 * @lc app=leetcode id=1481 lang=cpp
 *
 * [1481] Least Number of Unique Integers after K Removals
 */

// @lc code=start
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

          map<int,int> mp;

        for(auto it:arr)
        {
            mp[it]++;
        }

        //sort on the basis of frequency
        vector<pair<int,int>> v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());

        int n=v.size();

        //remove the elements of freq ==1 
        //or remvove ele of max freq  

        

        while(k>0)
        {
            if(v.size()==0)
            {
                break;
            }
            if(v[0].first==1)
            {
                v.erase(v.begin());
            }
           
            k--;
        }






        
    }
};
// @lc code=end

