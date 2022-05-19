class Solution {
public:
    int divisorSubstrings(int num, int k) {

// The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:

// It has a length of k.
// It is a divisor of num.
// Given integers num and k, return the k-beauty of num.

// Note:

// Leading zeros are allowed.
// 0 is not a divisor of any value.
// A substring is a contiguous sequence of characters in a string.





string str=to_string(num);
int n=str.length();
int count=0;

for(int i=0;i<=(n-k);i++)
{
    if(stoi(str.substr(i,k)) != 0)
    if(num%stoi(str.substr(i,k))==0)
    count++;

}
return count;
















    //     int count = 0;
    //     int n = num;

    //     int cur;
    //     int len = 0;
    //     while (n > 0) {
    //         n /= 10;
    //         len++;
    //     }
    //     for (int i = 1; i <= len; i++) {
    //         int left = 0;
    //         int right = i;
    //         while (right <= len) {
    //             int cur = 0;
    //             for (int j = left; j < right; j++) {
    //                 cur = cur * 10 + num % 10;
    //                 num /= 10;
                    
    //             }

    //            // return cur;

    //             if (num%cur == 0 && cur != 0) {
    //                 count++;
    //             }
    //             left++;
    //             right++;
    //         }
    //     }
    //   //  return count;

    //   return cur;
























        //take k length substrings of num from left to right and count the num divisible by substrings

    //     int count = 0;

    //     //convert num to string
    //   vector<int> num_vec;
    //   //push whole num to num_vec
    //    num_vec.push_back(num);

    //    //return size
    //      int size = num_vec.size();


        // return size;

 //take k length substrings of num_vec from left to right and count the num_vec divisible by substrings



//  for (int i = 0; i < size; i++)
//     {
//         int n = 0;
 
//         // Take all sub-strings starting from i
//         for (int j = i; j < size; j++)
//         {
//             n = n * 10 + (num_vec[j] - '0');
 
//             // If current sub-string is divisible by k
//             if (num%n == 0)
//                 count++;
//         }
//     }


//     return count;
       
        






        // for(int i = 0; i < num.length(); i++)
        // {
        //     for(int j = i; j < num.length(); j++)
        //     {
        //         int sub = stoi(num.substr(i, j-i+1));
        //         if(num%sub == 0)
        //             count++;
        //     }
        // }


       //all digit from num push into a vector
        // vector<int> digits;
        // while(num > 0)
        // {
        //     digits.push_back(num%10);
        //     num = num/10;
        // }

        // int n = digits.size();

      //  return n;

      //in vector take k length of elements make it string 





      

        // for(int i = 0; i < len; i++)
        // {
        //     for(int j = i; j < len; j++)
        //     {
        //         string sub = s.substr(i, j-i+1);
        //         int sub_num = stoi(sub);
        //         if(num%sub_num == 0)
        //             count++;
        //     }
        // }

       
        
       
        
    }
};