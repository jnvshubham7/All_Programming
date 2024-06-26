/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 */

// @lc code=start
class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        int result = 0;
        unordered_map<int,int> record;
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0)
                sum -= 1;
            else if(nums[i] == 1)
                sum += 1;
            
            if(sum == 0){
                result = max(result, i+1);
            }
            
            if(record.find(sum) != record.end()){
                result = max(result, i - record[sum]);
            }
            else{
                record[sum] = i;
            }
        }
        return result;
        
    }
};
// @lc code=end

