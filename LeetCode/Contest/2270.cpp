class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

int count=0;

long long int  right_sum=0;
long long int  left_sum=0;

for(int i=0;i<nums.size();i++)
{
    right_sum += nums[i];
}


for(int i=0;i<nums.size()-1;i++)
{
    left_sum += nums[i];

    right_sum -= nums[i];

    if(left_sum>=right_sum)
    count++;

}

return count;























//         You are given a 0-indexed integer array nums of length n.

// nums contains a valid split at index i if the following are true:

// The sum of the first i + 1 elements is greater than or equal to the sum of the last n - i - 1 elements.
// There is at least one element to the right of i. That is, 0 <= i < n - 1.
// Return the number of valid splits in nums.


// Input: nums = [10,4,-8,7]
// Output: 2
// Explanation: 
// There are three ways of splitting nums into two non-empty parts:
// - Split nums at index 0. Then, the first part is [10], and its sum is 10. The second part is [4,-8,7], and its sum is 3. Since 10 >= 3, i = 0 is a valid split.
// - Split nums at index 1. Then, the first part is [10,4], and its sum is 14. The second part is [-8,7], and its sum is -1. Since 14 >= -1, i = 1 is a valid split.
// - Split nums at index 2. Then, the first part is [10,4,-8], and its sum is 6. The second part is [7], and its sum is 7. Since 6 < 7, i = 2 is not a valid split.
// Thus, the number of valid splits in nums is 2.


// vector<int> right;
// vector<int> left;
// int count=0;



//split at every index in two parts 
//then push all right element in right vector
//then push all left element in left vector
//then compare the sum of left and right vector


// for(int i = 0; i < nums.size(); i++){
//     //split at every index in two parts
//    // Split nums at index 0


//     int left_sum = 0;
//     int right_sum = 0;
//     for(int j = 0; j < i; j++){
//         left_sum += nums[j];
//     }
//     for(int j = i+1; j < nums.size(); j++){
//         right_sum += nums[j];
//     }
//     if(left_sum >= right_sum){
//         count++;
//     }
// }
// return count;




        // int n = nums.size();
        // int count = 0;

      //  int cur = 0;
        // for (int i = 0; i < n; i++) {
        //     cur += nums[i];
        //     if (cur == 0) {
        //         count++;
        //     }
        // }
        // return count;















        // int sum=0;
        // int sum1=0;
        // int count=0;

        //go to every index of nums then add all right element in sum and all left element in sum1

        // for(int i=0;i<nums.size();i++)
        // {
        //     sum+=nums[i];
        //     sum1+=nums[nums.size()-i-1];
        //     if(sum>sum1)
        //     {
        //         count++;
        //     }

        // }   

      //  return count;     
    }



};