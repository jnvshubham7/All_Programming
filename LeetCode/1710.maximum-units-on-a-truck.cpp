/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        int ans=0;
        sort(boxTypes[0].begin(),boxTypes[0].end());

        int n=boxTypes.size();

       for(auto it: boxTypes)
       {

        int curr=min(it[0],truckSize);

        truckSize-=curr;
        ans+=curr*it[1];
        if(truckSize==0)
        break;
          
       }
       return ans;
        
    }
};
// @lc code=end

