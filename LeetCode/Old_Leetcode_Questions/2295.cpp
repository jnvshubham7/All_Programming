class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

        // Replace Elements in an Array
//         You are given a 0-indexed array nums that consists of n distinct positive integers. Apply m operations to this array, where in the ith operation you replace the number operations[i][0] with operations[i][1].

// It is guaranteed that in the ith operation:

// operations[i][0] exists in nums.
// operations[i][1] does not exist in nums.
// Return the array obtained after applying all the operations.
// Input: nums = [1,2,4,6], operations = [[1,3],[4,7],[6,1]]
// Output: [3,2,7,1]
// Explanation: We perform the following operations on nums:
// - Replace the number 1 with 3. nums becomes [3,2,4,6].
// - Replace the number 4 with 7. nums becomes [3,2,7,6].
// - Replace the number 6 with 1. nums becomes [3,2,7,1].
// We return the final array [3,2,7,1].

        int n=nums.size();

         //if nums[i]==operation.first element then replace it with operation.second element

            //without loop any method have 


            int m=operations.size();

           while(m--)
            {
                int index=operations[i][0];
                int value=operations[i][1];

                if(nums[i]==index)
                {
                    nums[i]=value;
                    //i++;
                }

                if(m==m-n)
                // {
                //     return nums;
                // }

                break;




            }

            return nums;





        // for(int i=0;i<operations.size();i++)
        // {
        //     int a=operations[i][0];

        //     int b=operations[i][1];

        //     nums[a]=b;
        // }




        // for(int i=0;i<n;i++)
        // {
        //     //if nums[i]==operation.first element then replace it with operation.second element

        //     //without loop

        //     //  if(nums[i]==operations[i][0])
        //     // {
        //     //     nums[i]=operations[i][1];
        //     // }




        //     for(int j=0;j<operations.size();j++)
        //     {
        //         if(nums[i]==operations[j][0])
        //         {
        //             nums[i]=operations[j][1];
        //             break;
        //         }
        //     }
        // }

       // return nums;
        
    }
};