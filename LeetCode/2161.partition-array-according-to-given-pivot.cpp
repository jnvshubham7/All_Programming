/*
 * @lc app=leetcode id=2161 lang=cpp
 *
 * [2161] Partition Array According to Given Pivot
 */

// @lc code=start
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> left;
    vector<int> right;
    // create a vector to store the pivot element
    vector<int> pivot_vec;
    // create a vector to store the result
    vector<int> result;
    // check if pivot is in the array
    if (find(nums.begin(), nums.end(), pivot) != nums.end()) {
      // if pivot is in the array
      // iterate through the array
      for (int i = 0; i < nums.size(); i++) {

        // if nums[i] is equal to pivot push it in pivot_vec
        if (nums[i] == pivot) {
          pivot_vec.push_back(nums[i]);
        }
        // if nums[i] is less than pivot
        else if (nums[i] < pivot) {
          // push nums[i] in left vector
          left.push_back(nums[i]);
        }
        // if nums[i] is greater than pivot
        else if (nums[i] > pivot) {
          // push nums[i] in right vector
          right.push_back(nums[i]);
        }
        // if nums[i] is equal to pivot
        else {
          // push nums[i] in result vector
          result.push_back(nums[i]);
        }
      }

      result.insert(result.end(), left.begin(), left.end());
      result.insert(result.end(), pivot_vec.begin(), pivot_vec.end());
      result.insert(result.end(), right.begin(), right.end());
    }

    return result;
        
    }
};
// @lc code=end

