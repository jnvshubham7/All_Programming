class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int>dp(nums.size());
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[nums.size()-1];
    }
};























// class Solution {
// public:
//   int rec(vector<int>& nums,int idx,vector<int>&dp){
//        if(idx >= nums.size()) return 0;
//        if(dp[idx] != -1) return dp[idx];
//        return dp[idx] = max(rec(nums, idx+1, dp), nums[idx] + rec(nums, idx+2, dp));
//   }
//   int rob(vector<int>& nums) {
//       vector<int>dp(nums.size()+1,-1);
//       return rec(nums,0,dp);
//   }
// };






















// class Solution {
// public:
    
    
//     int rec(vector<int>& nums,int idx){
//         if(idx>=nums.size())return 0;
//         return max(nums[idx]+rec(nums,idx+2),rec(nums,idx+1));
//     }
//     int rob(vector<int>& nums) {
//         return rec(nums,0);
//     }
//  //   int rob(vector<int>& nums) {

//         //add all odd positions and add all even positions to get the maximum profit.
// //         int n = nums.size();
// //         if(n == 0)
// //             return 0;
// //         if(n == 1)

// //             return nums[0];
// //         if(n == 2)
// //             return max(nums[0], nums[1]);


// //             //add all odd postion and add all even postion and compare the two.
// //         int odd = 0;
// //         int even = 0;
// //         for(int i=0; i<n; i++)
// //         {
// //             if(i%2 == 0)
// //                 even += nums[i];
// //             else

// //                 odd += nums[i];
// //         }
// //         return max(odd, even);
        

//         // int odd = nums[0];
//         // int even = max(nums[0], nums[1]);
//         // int ans = even;
//         // for(int i=2; i<n; i++)
//         // {
//         //     int temp = max(odd+nums[i], even);
//         //     odd = even;
//         //     even = temp;
//         //     ans = max(ans, temp);

//         // }
//         // return ans;




        
//    // }
// };