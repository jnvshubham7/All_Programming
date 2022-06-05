class Solution {
public:








 //check if new array is alternating
       
    int minimumOperations(vector<int>& nums) {


// 		The array nums is called alternating if:

// nums[i - 2] == nums[i], where 2 <= i <= n - 1.
// nums[i - 1] != nums[i], where 1 <= i <= n - 1.


//In one operation, 
//you can choose an index i and change nums[i] into any positive integer.
   //    Return the minimum number of operations required to make the array alternating. 

   //store all freq of nums
    unordered_map<int, int> freq;
    for(int i = 0; i < nums.size(); i++){
        freq[nums[i]]++;
    }

    //check which nums have max freq
    int maxFreq = 0;
    int maxFreqNum = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->second > maxFreq){
            maxFreq = it->second;
            maxFreqNum = it->first;
        }
    }


    //find 2nd max freq num
    int secondMaxFreq = 0;
    int secondMaxFreqNum = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->first != maxFreqNum && it->second > secondMaxFreq){
            secondMaxFreq = it->second;
            secondMaxFreqNum = it->first;
        }
    }


   //change in nums so that all odd positions are maxFreqNum and all even positions are  with minimum count++
    // int count = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     if(i % 2 == 0){
    //         if(nums[i] != maxFreqNum){
    //             count++;
    //         }
    //     }
    //     else{
    //         if(nums[i] != secondMaxFreqNum){
    //             count++;
    //         }
    //     }
    // }

    // return count-1;
    //}



   //replace some place in nums to create alternating array
    int count = 0;
    for(int i = 2; i < nums.size(); i++){


        if(nums[0]==maxFreqNum && nums[1]==secondMaxFreqNum){
           if(nums[i]==secondMaxFreqNum){
               nums[i] = maxFreqNum;
               count++;
           }
           else {
               continue;
           }
          
          
        }

        else if(nums[0]==secondMaxFreqNum && nums[1]==maxFreqNum){
            if(nums[i]==maxFreqNum){
                nums[i] = secondMaxFreqNum;
                count++;
            }
            else {
                continue;
            }
        }

        else if(nums[0]==maxFreqNum && nums[1]!=secondMaxFreqNum){
            if(nums[i]==secondMaxFreqNum){
                nums[i] = maxFreqNum;
                count++;
            }
            else {
                continue;
            }
        }

        else if(nums[0]!=maxFreqNum && nums[1]==secondMaxFreqNum){
            if(nums[i]==maxFreqNum){
                nums[i] = secondMaxFreqNum;
                count++;
            }
            else {
                continue;
            }
        }

        else{
            continue;
        }

    }
      




        // if(nums[i] == maxFreqNum){
        //     nums[i] = secondMaxFreqNum;
        //     count++;
        // }
   // }

     return count;
    // }































   //change in nums to make it alternating with minimum operations count++
    // int count = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     //if nums[i] != nums[i-1] then continue also check if nums[i] == maxFreqNum then continue without changing it
    //     if(nums[i] != nums[i-1] && nums[i] != maxFreqNum){
    //         //if nums[i] == secondMaxFreqNum then change it to maxFreqNum
           
    //         //if nums[i] != secondMaxFreqNum then change it to secondMaxFreqNum
            
    //             nums[i] = secondMaxFreqNum;
    //             count++;
            
    //     }

    //     else {
    //         //if nums[i] == maxFreqNum then change it to secondMaxFreqNum
           
    //             nums[i] = maxFreqNum;
    //             count++;
    //         }
    //     }
    
       
    
    //   return count;

    // return count;
    // }






    //we do min operations to make all nums to be alternating
    // int minOperations = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     if(nums[i] != maxFreqNum){
    //         minOperations += maxFreq - freq[nums[i]];
    //     }
    // }

   // return minOperations;

        //create new array with max freq num with alternating nums
//          int count = 0;
//         vector<int> newNums;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         for(int i = 1; i < nums.size(); i++){


//             //// 		The array nums is called alternating if:

// // nums[i - 2] == nums[i], where 2 <= i <= n - 1.
// // nums[i - 1] != nums[i], where 1 <= i <= n - 1.


//             if((nums[i] == maxFreqNum) && (nums[i]!=nums[i-1])){
//                 newNums.push_back(nums[i]);
//                 newNums.push_back(nums[i]);
//             }else{
//                 newNums.push_back(nums[i]);

//                 count++;
//             }
        
            // if(nums[i] == maxFreqNum){
            //     newNums.push_back(maxFreqNum);
            // }
            // else{
            //     newNums.push_back(0);
            //     count++;
            // }
      //  }

       

        // if(isAlternating){
        //     return 0;
        // }

       

    















    }
};