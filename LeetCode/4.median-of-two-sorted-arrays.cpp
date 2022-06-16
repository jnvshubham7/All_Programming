/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> v;

        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }

        sort(v.begin(),v.end());

        int n=v.size();
        double m;

        if(n%2!=0)
        {
            return v[n/2];
        }
        else {
            m=v[(n/2)-1]+v[(n/2)];
        }


        return m/2;

    }
};
// @lc code=end

