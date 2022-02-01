class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    // rotate the array to the right by k steps

    // store this in a temp array
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      temp[(i + k) % nums.size()] = nums[i];
    }
    // rotate the array back to the original position
    for (int i = 0; i < nums.size(); i++) {
      nums[i] = temp[i];
    }

    return nums;
  }
};


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         k=k%n;
//         reverse(nums.end()-k,nums.end()); //reverse nums[n-k] to nums[n-1]
//         reverse(nums.begin(),nums.end()-k); //reverse nums[0] to nums[n-k-1]
//         reverse(nums.begin(),nums.end());  //reverse complete array
//     }
// };
