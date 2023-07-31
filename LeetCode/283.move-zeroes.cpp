/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=i+1;j<n;j++){
                    if(nums[j]!=0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }
        

        // vector<int> v;
        // vector<int> v1;

        // int n=nums.size();

        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         v.push_back(nums[i]);
        //     }
        //     else{
        //         v1.push_back(nums[i]);
        //     }
        // }

        // for(int i=0;i<v.size();i++){
        //     nums[i]=v[i];
        // }

        // for(int i=0;i<v1.size();i++){
        //     nums[i+v.size()]=v1[i];
        // }


        
    }
};
// @lc code=end

