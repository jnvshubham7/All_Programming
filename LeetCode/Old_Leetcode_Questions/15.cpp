class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       // Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
       //such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.


       
        // vector<vector<int>> ans;
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size()-2; i++){
        //     if(i==0 || (i>0 && nums[i]!=nums[i-1])){
        //         int l = i+1;
        //         int r = nums.size()-1;
        //         while(l<r){
        //             int sum = nums[i] + nums[l] + nums[r];
        //             if(sum==0){
        //                 ans.push_back({nums[i], nums[l], nums[r]});
        //                 while(l<r && nums[l]==nums[l+1]) l++;
        //                 while(l<r && nums[r]==nums[r-1]) r--;
        //                 l++;
        //                 r--;
        //             }
        //             else if(sum<0){
        //                 l++;
        //             }
        //             else{
        //                 r--;
        //             }
        //         }
        //     }
        // }
        // return ans;
        
    }
};