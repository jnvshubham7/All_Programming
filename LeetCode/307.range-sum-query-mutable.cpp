/*
 * @lc app=leetcode id=307 lang=cpp
 *
 * [307] Range Sum Query - Mutable
 */

// @lc code=start
class NumArray {
public:

   map<int, int> mp;
    NumArray(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            mp[i] = nums[i];
        }
        
    }
    
    void update(int index, int val) {
        mp[index] = val;
        
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += mp[i];
        }
        return sum;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
// @lc code=end

