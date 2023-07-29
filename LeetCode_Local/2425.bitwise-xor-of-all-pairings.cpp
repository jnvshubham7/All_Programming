/*
 * @lc app=leetcode id=2425 lang=cpp
 *
 * [2425] Bitwise XOR of All Pairings
 */

// @lc code=start
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {



        vector<int> v;

        //push all elements
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }


        int ans=0;

        for(int i=0;i<v.size();i++)
        {
            ans^=v[i];
        }

        return ans;






    // int ans=0;
    // for(int i=0;i<nums1.size();i++)
    // {
    //     for(int j=0;j<nums2.size();j++)
    //     {
    //         ans^=(nums1[i]^nums2[j]);
    //     }


        
    // }

    // return ans;
        
    }
};
// @lc code=end

