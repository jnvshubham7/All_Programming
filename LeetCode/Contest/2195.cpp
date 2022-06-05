class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end());

















         

         //return smallest positive number which is not present in nums
            // long long res = 0;
            // for(int i = 0; i < nums.size(); i++){
            //     if(nums[i] > 0){
            //         res = nums[i];
            //         break;
            //     }
            // }
            // for(int i = 0; i < nums.size(); i++){
            //     if(nums[i] > 0 && nums[i] < res){
            //         res = nums[i];
            //     }
            // }
            // return res;


         //return smallest postive number ehich is not in nums
            // long long res = 0;
            // for(int i = 0; i < nums.size(); i++){

            //     if(nums[i] > 0){
            //         res = nums[i];
            //         break;
            //     }
            // }
            // for(int i = 0; i < nums.size(); i++){
            //     if(nums[i] > 0 && nums[i] < res){
            //         res = nums[i];
            //     }
            // }
            // return res;


         //return smallest sum of k numbers which is not present in nums

//  long long min_num = LONG_MAX;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] > 0 && nums[i] < min_num)
//                 min_num = nums[i];
//         }
//         if(min_num == LONG_MAX)
//             min_num = 0;

//             return min_num;
//         long long sum = 0;
        // for(int i = 0; i < k; i++)
        // {
        //     sum += min_num;
        // }
        // return sum;





           
    


        // //store smallest positive number which is not in nums
        // long long min_num = LONG_MAX;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i] > 0 && nums[i] < min_num)
        //         min_num = nums[i];
        // }
        // if(min_num == LONG_MAX)
        //     min_num = 0;




        
        // long long sum = 0;
        // long long res = LONG_MAX;
        // int i = 0;
        // while(i < nums.size())
        // {
        //     if(nums[i] < 0)
        //     {
        //         i++;
        //         continue;
        //     }
        //     sum += nums[i];
        //     if(sum == min_num)
        //     {
        //         res = min(res, k);
        //         sum = 0;
        //         i++;
        //         continue;
        //     }
        //     if(sum > min_num)
        //     {
        //         res = min(res, k - 1);
        //         sum = 0;
        //         i++;
        //         continue;
        //     }
        //     i++;
        // }
        // return res;






















//     }
// };


       


        //find smallest postive number which is not in nums
        // long long min = 1;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i] > 0 && nums[i] < min)
        //         min = nums[i];
        // }

        // //return min
        // return min;


        // if(min == 1)
        //     return 0;

        //     //find k smallest numbers which are not in nums
        // long long sum = 0;
        // for(int i = 0; i < k; i++)
        // {
        //     sum += min;
        // }
        // return sum;
    




       // You are given an integer array nums and an integer k. Append k unique positive integers that do not appear in nums to nums such that the resulting total sum is minimum.

//Return the sum of the k integers appended to nums.

//store k unique positive integers that do not appear in nums 
//append them to nums
//return the sum of the k integers appended to nums.

    //find k unique positive integers that do not appear in nums

    // for(int i = 0; i < k; i++)
    // {
    //     int temp = 0;
    //     while(temp == 0)
    //     {
    //         temp = rand() % 100 + 1;
    //         if(find(nums.begin(), nums.end(), temp) == nums.end())
    //         {
    //             nums.push_back(temp);
    //         }
    //         else
    //         {
    //             temp = 0;
    //         }


        
    // }
    // }
    // long long sum = 0;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     sum += nums[i];
    // }
    // return sum;


















    }

};