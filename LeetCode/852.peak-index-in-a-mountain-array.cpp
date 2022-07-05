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
        if(n==1) return 0;

        int start=0,end=n-1;
        while(start<=end){
           int mid=start+(end-start)/2;
           if(mid>0 && mid<n-1)
           {
                 if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                     return mid;
                 else if(arr[mid]<arr[mid-1])
                     end=mid-1;
                 else
                     start=mid+1;
             }
             else if(mid==0)
             {
                 if(arr[mid]>arr[mid+1])
                     return mid;
                 else
                     return mid+1;
             }
             else if(mid==n-1)
             {
                 if(arr[mid]>arr[mid-1])
                     return mid;
                 else
                     return mid-1;
           }
          
        }
        return -1;
        
        
    }
};
// @lc code=end

