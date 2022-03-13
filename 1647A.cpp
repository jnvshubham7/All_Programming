#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    //Find the maximum decimal number without zeroes and with no equal digits in a row, such that the sum of its digits is n.
    //For example, if n = 3, the maximum number is 999, because 9 + 9 + 9 = 27, and the sum of its digits is 3.
    //If n = 4, the maximum number is 9999, because 9 + 9 + 9 + 9 = 36, and the sum of its digits is 4.

    int n;
    //n is the sum of digit
    cin>>n;
    //print the maximum number you can obtain.


    //Find the maximum decimal number without zeroes and with no equal digits in a row, such that the sum of its digits is n.
    //For example, if n = 3, the maximum number is 999, because 9 + 9 + 9 = 27, and the sum of its digits is 3.
    //If n = 4, the maximum number is 9999, because 9 + 9 + 9 + 9 = 36, and the sum of its digits is 4.


























    int max_num = pow(10,n)-1;
    int min_num = pow(10,n-1);
    int max_sum = 0;
    int max_num_sum = 0;
    for(int i = max_num; i >= min_num; i--){
        //find that num which not have equal digits in a row and sum of its digits is n and no digit is zero



        int sum = 0;
        int num_sum = 0;
        int num = i;
        //find that num which not have equal digits in a row and sum of its digits is n and no digit is zero
        
        while(num != 0){
            sum += num%10;
            num_sum += num%10;
            num /= 10;
        }
        if(sum == n && num_sum > max_num_sum){
            max_num_sum = num_sum;
            max_sum = sum;
            //find that num which not have equal digits in a row and sum of its digits is n and no digit is zero



           // max_num = i;


        }
    }
   // cout<<max_num_sum<<endl;
   //print max num
  //  cout<<max_num_sum<<endl;
    cout<<max_num<<endl;


}

    return 0;
}