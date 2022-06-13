/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }

        for(int i=0;i<n;i++)
        {
            if(arr[i]==max)
            {
                return i;
            }
        }
        return -1;
        
    }
};
// @lc code=end

