class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        sort(nums.begin(), nums.end());
        //check orginial value is in the vector or not
        //if present then multiply the original value by 2 then again check orginal value is in the vector or not
        //if present then again multiply the original value by 2 and again check orginal value is in the vector or not
        //so on if not present then return the original value with multiplication by 2

        //if original value is present then original=original*2 and check again and so on
        //if original value is not present then return the original value with multiplication by 2
//check the original value is in the vector or not
//if not present then return the original value






        int i = 0;
        int j = nums.size() - 1;
        while(i <= j)
        {
            if(nums[i] == original)
            {
                original = original * 2;
                i++;
                
            }
            // else if(nums[j] == original)
            // {
            //     original = original * 2;
            //     i++;
            //     j--;
            // }
            else
                return original;
        }
        return original;


        // int i = 0;
        // int j = nums.size() - 1;

        // while(i <= j)
        // {
        //     if(nums[i] == original)
        //     {
        //         return original * 2;
        //     }
        //     else if(nums[j] == original)
        //     {
        //         return original * 2;
        //     }
        //     else if(nums[i] * 2 == original)
        //     {
        //         return original * 2;
        //     }
        //     else if(nums[j] * 2 == original)
        //     {
        //         return original * 2;
        //     }
        //     else if(nums[i] * 2 > original)
        //     {
        //         return nums[i];
        //     }
        //     else if(nums[j] * 2 > original)
        //     {
        //         return nums[j];
        //     }
        //     i++;
        //     j--;
        // }

        // return original ;

        //check orginial value is in the vector or not

        //for(int i = 0; i < nums.size(); i++)
        //{
        //    if(nums[i] != original)


      

//  if(find(nums.begin(), nums.end(), original) != nums.end())
//             return original;

//         // else
//         //     return nums[nums.size() - 1];


//         int i = 0;
//         int j = nums.size() - 1;
//         while(i <= j)
//         {
//             int mid = (i + j) / 2;
//             if(nums[mid] == original)
//             {
//                 int temp = original * 2;
//                 if(binary_search(nums.begin(), nums.end(), temp))
//                 {
//                     temp = temp * 2;
//                     if(binary_search(nums.begin(), nums.end(), temp))
//                         return temp*2;
//                     else
//                         return original*2;
//                 }
//                 else
//                     return original*2;
//             }
//             else if(nums[mid] > original)
//                 j = mid - 1;
//             else
//                 i = mid + 1;
//         }
//         return original;



       



        //orginal number in the vector if found then multiply by 2 
        //then again find orginal number in the vector
        //if not found then return original number
        // int i = 0;
        // int j = nums.size() - 1;
        // while(i < j)
        // {
        //     if(nums[i] == original)
        //     {
        //         original= nums[i] * 2;

        //     i++;
        //     }

        //     else{
        //         return original;
        //         break;
        //     }
        // }
        // return original;


        
    }
};