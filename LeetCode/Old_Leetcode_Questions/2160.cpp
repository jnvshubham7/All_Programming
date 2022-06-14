class Solution {
public:
    int minimumSum(int num) {

        //store all digits from num in a array
        int digits[4];
        int i = 0;
        while (num > 0) {
            digits[i++] = num % 10;
            num /= 10;
        }
        //sort the array
        sort(digits, digits + 4);
        //return array as int

        //create one string from digits array 1st digit and last digit
        string s = to_string(digits[0]) + to_string(digits[3]);
        

                //create one string from digits array 2nd digit and 3th digit
        string s1 = to_string(digits[1]) + to_string(digits[2]);

        //return the sum of two strings
        return stoi(s) + stoi(s1);






        //
      //  return stoi(s);
        // int sum = 0;
        // for (int i = 0; i < 4; i++) {
        //     sum = sum * 10 + digits[i];
        // }
        // return sum;


        // int digits[10];
        // for (int i = 0; i < 10; i++) {
        //     digits[i] = i;
        // }


        //all digit of num store in a vector 
        // vector<int> num_vec;
        // while(num) {
        //     num_vec.push_back(num%10);
        //     num /= 10;
        // }
        // //sort the vector
        // sort(num_vec.begin(), num_vec.end());
        // //return vector
        // return num_vec;

        //create two combnation string from the vector 1st and last digit or 2nd and 3rd digit
        // string comb1 = "";
        // string comb2 = "";
        // for(int i = 0; i < num_vec.size(); i++) {
        //     if(i == 0) {
        //         comb1 += to_string(num_vec[i]);
        //         comb2 += to_string(num_vec[num_vec.size()-1]);
        //     }
        //     else if(i == 1) {
        //         comb1 += to_string(num_vec[i]);
        //         comb2 += to_string(num_vec[num_vec.size()-2]);
        //     }
        //     else {
        //         comb1 += to_string(num_vec[i]);
        //         comb2 += to_string(num_vec[num_vec.size()-3]);
        //     }
        // }
        // //return both combination
        // return stoi(comb1) + stoi(comb2);
        //return the minimum sum of two combnation string
     //   return min(stoi(comb1), stoi(comb2));






















        //convert the string to integer
        // int comb1_int = stoi(comb1);
        // int comb2_int = stoi(comb2);
        //return the minimum sum
       // return min(comb1_int, comb2_int);

        //create all possible combination of num_vec and store in a vector
        // vector<vector<int>> all_combination;
        // for(int i = 0; i < num_vec.size(); i++) {
        //     vector<int> temp;
        //     temp.push_back(num_vec[i]);
        //     all_combination.push_back(temp);
        // }
        // for(int i = 0; i < num_vec.size()-1; i++) {
        //     for(int j = i+1; j < num_vec.size(); j++) {
        //         vector<int> temp;
        //         temp.push_back(num_vec[i]);
        //         temp.push_back(num_vec[j]);
        //         all_combination.push_back(temp);
        //     }
        // }
        // //find the minimum sum of all combination
        // int min_sum = INT_MAX;
        // for(int i = 0; i < all_combination.size(); i++) {
        //     int sum = 0;
        //     for(int j = 0; j < all_combination[i].size(); j++) {
        //         sum += all_combination[i][j];
        //     }
        //     if(sum < min_sum) {
        //         min_sum = sum;
        //     }
        // }
        // return min_sum;



        //create two new integers new1 and new2 by using the digits
        // int new1 = 0;
        // int new2 = 0;
        // for(int i = 0; i < num_vec.size(); i++) {
        //     new1 = new1*10 + num_vec[i];
        //     new2 = new2*10 + num_vec[num_vec.size()-1-i];
        // }
        
        //creat 
        //create two string from the vector and store in a vector
        // vector<string> num_str;
        // for(int i = 0; i < num_vec.size(); i++) {
        //     stringstream ss;
        //     ss << num_vec[i];
        //     num_str.push_back(ss.str());
        // }
        // //create a string from the vector
        // string num_str_all = "";
        // for(int i = 0; i < num_str.size(); i++) {
        //     num_str_all += num_str[i];
        // }





//         You are given a positive integer num consisting of exactly four digits. 
//Split num into two new integers new1 and new2 by using the digits found in num. 
//Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.

// For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3. 
//Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
// Return the minimum possible sum of new1 and new2.

//Split num into two new integers new1 and new2 by using the digits found in num. 

// int new1 = 0, new2 = 0;
// //create new1 and new2 by using the digits found in num
// for (int i = 0; i < 4; i++) {
//     new1 = new1 * 10 + num % 10;
//     new2 = new2 * 10 + num / 10 % 10;
//     num /= 10;
// }
// //return the minimum possible sum of new1 and new2.
// return min(new1, new2);













        //store all pairs of numbers possible from num digits 
        // vector<vector<int>> pairs;
        // for (int i = 0; i < num; i++) {
        //     for (int j = i + 1; j < num; j++) {
        //         pairs.push_back({i, j});
        //     }
        // }
        // //find the minimum sum of all pairs
        // int minSum = INT_MAX;
        // for (auto pair : pairs) {
        //     int sum = 0;
        //     for (int i = 0; i < num; i++) {
        //         if (i == pair[0] || i == pair[1]) {
        //             sum += i;
        //         }
        //     }
        //     minSum = min(minSum, sum);
        // }
        // return minSum;
        


        //Split num into two new integers new1 and new2 by using the digits found in num
        // int new1 = num / 10;
        // int new2 = num % 10;

        // //If new1 is 0, then the minimum sum is new2
        // if (new1 == 0) {
        //     return new2;
        // }
        // //If new2 is 0, then the minimum sum is new1
        // else if (new2 == 0) {
        //     return new1;
        // }
        // //If new1 is less than new2, then the minimum sum is new1
        // else if (new1 < new2) {
        //     return new1;
        // }
        // //If new2 is less than new1, then the minimum sum is new2
        // else {
        //     return new2;
        // }






















   // }

       //find the Minimum Sum of Four Digit Number After Splitting Digits
        // int sum = 0;
        // int min = INT_MAX;

        // int sum = 0;
        // int min=INT_MAX;

        // //split the number into two digit
        // //find the minimum sum of two digit

        // for(int i=1;i<=num;i++)
        // {
        //     for(int j=1;j<=num;j++)
        //     {
        //         sum = i+j;
        //         if(sum<min)
        //         {
        //             min = sum;
        //         }
        //     }
        // }
        // return min;


       

        //len
        // int n=num.size();
        // int i,j,k,l;
       // int temp;
       //split the number into two parts


       
    //    for(int i=0;i<n/2;i++){
    //           for(int j=i+1;j<n/2;j++){
    //             for(int k=j+1;k<n/2;k++){
    //                  for(int l=k+1;l<n/2;l++){
    //                       int temp = num[i]*1000+num[j]*100+num[k]*10+num[l];
    //                       if(temp<min){
    //                         min = temp;
    //                       }
    //                  }
    //             }
    //           }

    //    }
    //      return min;













        //find the minimum sum of four digit number
        //after splitting the digits

        //split the digits in two parts
        //and find the minimum sum of two parts






      //  return min;






        
    }
};