/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
private:
    vector<int> generatePrefixProduct(vector<int>& nums){
        int n = nums.size();

        vector<int> L(n,1);
        for(int i=1;i<n;i++){
            L[i]=L[i-1]*nums[i-1];
        }

        return L;
    }

    vector<int> generatePostfixProduct(vector<int>& nums) {
        int n = nums.size();

        vector<int> R(n,1);
        for(int i=n-2 ; i>=0 ; i--){
            R[i] = R[i+1]*nums[i+1];
        }

        return R;
    }

    vector<int> dotProduct(vector<int> nums1,vector<int> nums2) {
        int n = nums1.size();

        vector<int> ans(n);
        for(int i=0 ; i<n ; i++){
            ans[i] = nums1[i]*nums2[i];
        }

        return ans;
    }
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> L = generatePrefixProduct(nums);
        vector<int> R = generatePostfixProduct(nums);

        vector<int> ans = dotProduct(L,R);
        return ans;
    }
};
// @lc code=end

