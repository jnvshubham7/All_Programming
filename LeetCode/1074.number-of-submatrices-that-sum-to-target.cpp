/*
 * @lc app=leetcode id=1074 lang=cpp
 *
 * [1074] Number of Submatrices That Sum to Target
 */

// @lc code=start
class Solution {
public:

    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        for (int i = 0; i < m; i++) {
            vector<int> sum(n, 0);
            for (int j = i; j < m; j++) {
                for (int k = 0; k < n; k++) {
                    sum[k] += matrix[j][k];
                    cout<<sum[k]<<" "<<"sum[k]"<<" "<<matrix[j][k]<<" " <<"matrix[j][k]"<<endl;
                }
                ans += countSubarraySum(sum, target);
               cout<<ans<<" "<<"ans"<<" "<<countSubarraySum(sum, target)<<" "<<"countSubarraySum(sum, target)"<<endl;
            }
        }
        return ans;

      
        
    }

    int countSubarraySum(vector<int>& arr, int target) {
        int n = arr.size();
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            ans += mp[sum - target];
            mp[sum]++;
        }
        return ans;
    }
};
// @lc code=end

