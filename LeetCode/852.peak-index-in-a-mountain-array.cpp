/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
            
            int  s=1, e=arr.size()-2, mid;
            
            while(s<=e)
            {
                mid= s+(e-s)/2;
                
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                    return mid;
                
                else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
                    s=mid+1;
                
                else
                    e=mid-1;
            }
            
            return -1;
            
        
        
    }
};
// @lc code=end

