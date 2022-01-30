class Solution {
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k) {

    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {

      map[nums[i]]++;
    }
    // check if two element is same then check index of two element is less than
    // k or not
    for (int i = 0; i < nums.size(); i++) {
      if (map[nums[i]] > 1) {
        for (int j = i + 1; j < nums.size(); j++) {
          if (nums[i] == nums[j] && abs(i - j) <= k) {
            return true;
          }
        }
      }
    }

    return false;
  }
};