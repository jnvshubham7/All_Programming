/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& arr, int s) {

        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            ans+=mp[sum-s];
            mp[sum]++;
        }
        return ans;
        

         
       
    }
};
// @lc code=end

