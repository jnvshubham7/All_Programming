class Solution {
public:
    vector<long long> sumOfThree(long long num) {

        // Given an integer num, return three consecutive integers (as a sorted array) that sum to num. 
        // If num cannot be expressed as the sum of three consecutive integers, return an empty array.

        //store 3 consecutive numbers that sum of three consecutive numbers is equal to num

       //if(num<3) return {};

       if(num%3==0){
           //return num/3-1,num/3,num/3+1
              return {num/3-1,num/3,num/3+1};
       }
       else {
           //return empty array
              return {};
       }




        // vector<long long> res;
        // long long a=0,b=1,c=2;
        // long long sum=0;
        // while(sum<=num){
        //     sum=a+b+c;
        //     if(sum==num){
        //         res.push_back(a);
        //         res.push_back(b);
        //         res.push_back(c);
        //         break;
        //     }
        //     a=b;
        //     b=c;
        //     c++;
        // }
        // return res;


        



        
    }
};