class Solution {
    public:
    int firstMissingPositive(vector<int>& nums) {
       
    //first Missing positive 
    //Given an unsorted integer array, find the first missing positive integer.
    //For example,
    //Given [1,2,0] return 3,
    //and [3,4,-1,1] return 2.
    //Your algorithm should run in O(n) time and uses constant space.
    //
    //

    //1. sort the array
    //2. if the array is empty, return 1
    //3. if the array is all positive, return 1



    //1. sort the array
    sort(nums.begin(), nums.end());

    //2. if the array is empty, return 1

    if(nums.size() == 0)
        return 1;

    //3. if the array is all positive, return 1





    //4. if the array is all negative, return 1

    if(nums[0] < 1)
        return 1;

    //5. if the array is all positive, return 1

    if(nums[nums.size()-1] > nums.size())
        return nums.size()+1;

    //6. if the array is all positive, return 1
    









   









};    
        