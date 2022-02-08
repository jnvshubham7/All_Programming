class Solution {
public:
  vector<int> pivotArray(vector<int> &nums, int pivot) {

    // Input: nums = [9,12,5,10,14,3,10], pivot = 10
    // Output: [9,5,3,10,10,12,14]

    // Every element less than pivot appears before every element greater than
    // pivot. Every element equal to pivot appears in between the elements less
    // than and greater than pivot. The order of elements less than pivot is the
    // same as the order of elements in nums. The order of elements greater than
    // pivot is the same as the order of elements in nums.

    // create two vector one for left and one for right
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

    // sort left vector
    //  sort(left.begin(), left.end());
    // sort right vector
    //  sort(right.begin(), right.end());
    // merge left and right vector
    // insert all pivot in result vector in the middle
    // merge left and right vector
    // insert all pivot in result vector in the middle
    // merge left and right vector

    // if pivot is not in the array
    // else {
    //     //iterate through the array
    //     for(int i = 0; i < nums.size(); i++) {
    //         //if nums[i] is less than pivot
    //         if(nums[i] < pivot) {
    //             //push nums[i] in left vector
    //             left.push_back(nums[i]);
    //         }
    //         //if nums[i] is greater than pivot
    //         else if(nums[i] > pivot) {
    //             //push nums[i] in right vector
    //             right.push_back(nums[i]);
    //         }
    //     }
    //     //sort left vector
    //     sort(left.begin(), left.end());
    //     //sort right vector
    //     sort(right.begin(), right.end());
    //     //merge left and right vector and pivot in middle
    //     result.insert(result.end(), left.begin(), left.end());
    //     result.insert(result.end(), pivot);
    //     result.insert(result.end(), right.begin(), right.end());

    //     // result.insert(result.end(), left.begin(), left.end());
    //     // result.insert(result.end(), right.begin(), right.end());
    // }
    // return result vector
  }
};