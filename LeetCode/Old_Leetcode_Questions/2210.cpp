class Solution {
public:
    int countHillValley(vector<int>& num) {

//         Count Hills and Valleys in an Array

// You are given a 0-indexed integer array nums. An index i is part of a hill in nums if the closest non-equal neighbors of i are smaller than nums[i]. 
//Similarly, an index i is part of a valley in nums if the closest non-equal neighbors of i are larger than nums[i]. 
//Adjacent indices i and j are part of the same hill or valley if nums[i] == nums[j].

// Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on both the left and right of the index.

// Return the number of hills and valleys in nums.

//Example 1:

// Input: nums = [2,4,1,1,6,5]
// Output: 3
// Explanation:
// At index 0: There is no non-equal neighbor of 2 on the left, so index 0 is neither a hill nor a valley.
// At index 1: The closest non-equal neighbors of 4 are 2 and 1. Since 4 > 2 and 4 > 1, index 1 is a hill. 
// At index 2: The closest non-equal neighbors of 1 are 4 and 6. Since 1 < 4 and 1 < 6, index 2 is a valley.
// At index 3: The closest non-equal neighbors of 1 are 4 and 6. Since 1 < 4 and 1 < 6, index 3 is a valley, but note that it is part of the same valley as index 2.
// At index 4: The closest non-equal neighbors of 6 are 1 and 5. Since 6 > 1 and 6 > 5, index 4 is a hill.
// At index 5: There is no non-equal neighbor of 5 on the right, so index 5 is neither a hill nor a valley. 
// There are 3 hills and valleys so we return 3.

// int n=num.size();
// int hills=0,valleys=0;

// for(int i=0;i<n;i++)
// {
//     if(i==0 || i==n-1)
//        continue;


//        if(num[i]>num[i-1] )
//        {
//            hills++;
//            i++;

//            if(num[i]=num[i-1])
//            {
//               i+=2;
//            }
//        }
//        else if(num[i]<num[i-1] )
//        {
//            valleys++;
//               i++;
//               if(num[i]=num[i-1])
//               {
//                  i+=2;
//               }
//        }


// }

// return hills+valleys;
    

    // for(int i=0;i<n;i++)
    // {
    //     if(i==0)
    //     {
    //         if(num[i]>num[i+1])
    //         {
    //             hills++;
    //         }
    //         else if(num[i]<num[i+1])
    //         {
    //             valleys++;
    //         }
    //     }
    //     else if(i==n-1)
    //     {
    //         if(num[i]>num[i-1])
    //         {
    //             hills++;
    //         }
    //         else if(num[i]<num[i-1])
    //         {
    //             valleys++;
    //         }
    //     }
    //     else
    //     {
    //         if(num[i]>num[i-1] && num[i]>num[i+1])
    //         {
    //             hills++;
    //         }
    //         else if(num[i]<num[i-1] && num[i]<num[i+1])
    //         {
    //             valleys++;
    //         }
    //     }
    // }
    // return hills+valleys-1;

// int n=num.size();
// int count = 0;
//         for(int i = 0; i < num.size(); i++){

//             if(i==0 || i==n-1)
//          continue;
//             // if(i == 0){
//             //     if(num[i] > num[i+1]){
//             //         count++;
//             //     }
//             // }
//             // else if(i == num.size()-1){
//             //     if(num[i] < num[i-1]){
//             //         count++;
//             //     }
//             // }
//             // else{
//                 if(num[i] > num[i-1] && num[i] > num[i+1]){
//                     count++;
//                 }
//                 else if(num[i] < num[i-1] && num[i] < num[i+1]){
//                     count++;
                
//             }
//         }
//         return count;
  
int n=num.size();
int hills=0,valleys=0;
// //store frequency of each element
// unordered_map<int,int> freq;
// for(int i=0;i<n;i++)
// {
//     freq[num[i]]++;
// }

// // unordered_map<int,int> m;
// // for(int i=0;i<n;i++)
// // {
// //      if(i==0 || i==n-1)
// //          continue;
// //     // if(i==0)
// //     // {
// //     //     if(num[i]>num[i+1])
// //     //     {
// //     //         m[i]=1;
// //     //         hills++;
// //     //     }
// //     //     else if(num[i]<num[i+1])
// //     //     {
// //     //         m[i]=0;
// //     //         valleys++;
// //     //     }
// //     //     else
// //     //     {
// //     //         m[i]=2;
// //     //     }
// //     // }
// //     // else if(i==n-1)
// //     // {
// //     //     if(num[i]>num[i-1])
// //     //     {
// //     //         m[i]=1;
// //     //         hills++;
// //     //     }
// //     //     else if(num[i]<num[i-1])
// //     //     {
// //     //         m[i]=0;
// //     //         valleys++;
// //     //     }
// //     //     else
// //     //     {
// //     //         m[i]=2;
// //     //     }
// //     // }
  
// //         if(num[i]>num[i-1] && num[i]>num[i+1])
// //         {
// //             m[i]=1;
// //             hills++;
// //         }
// //         else if(num[i]<num[i-1] && num[i]<num[i+1])
// //         {
// //             m[i]=0;
// //             valleys++;
// //         }
// //         else
// //         {
// //             m[i]=2;
// //         }
    
// // }


bool flag=false;
bool flag1=false;

for(int i=0;i<n;i++)
{

    //first index and last index there is no left and right so we will not consider them
    if(i==0 || i==n-1)
        continue;

    //if current index is greater than both left and right then it is a hill
    //freq is 1
    if(num[i]>num[i-1])
    {
        //if nums[i-1]==nums[i] then only one time hills will be incremented
        if(num[i-1]==num[i])
        {
            if(flag==false)
            {
                hills++;
                flag=true;
            }
        }
        else
        {
            hills++;
            flag=true;
        }
    }
    //same hill or valley if nums[i] == nums[j] then we will consider it as hill




     //   hills++;
        //store hills and nums[i]
    //    m[hills]=num[i];




    //if current index is less than both left and right then it is a valley
    if( num[i]<num[i+1] )
    {
        //if nums[i+1]==nums[i] then only one time valleys will be incremented
        if(num[i+1]==num[i])
        {
            if(flag1==false)
            {
                valleys++;
                flag1=true;
            }
        }
        else
        {
            valleys++;
            flag1=true;
        }

    }





    // if(i>0 && num[i]>num[i-1])
    // {
    //     hills++;


//  if(num[i]>num[i-1] &&  freq[num[i]]>=2)
//     {

//         flag=true;
       


//       //  hills++;
//       //  break;
//     }

//     if( num[i]<num[i+1] && freq[num[i]]>=2)
//     {
//         flag1=true;
       
//         // valleys++;
//         // break;
//        // valleys++;
//        // break;
//     }
        
    // }
    // if(i<n-1 && num[i]<num[i+1])
    // {
    //     valleys++;
    // }


 }
//same hill or valley if nums[i] == nums[j] 
//
// int ans=hills+valleys;
// if(flag==true && flag1==true)
// {
//   //  ans++;

    
//     hills++;
//     valleys++;
// }

// if(flag==true){
//     hills++;
// }
// if(flag1==true){
//     valleys++;
// }


// else if(flag==true)
// {
//     hills++;
// }
// else if(flag1==true)
// {
//     valleys++;
// }


 return hills+valleys;















    }


};