#include <bits/stdc++.h>
using namespace std;
// function to count fibonacci numbers in range
// from start to last
int count_fibonacci(int start, int last){
   // First three Fibonacci Numbers
   int fib1 = 0, fib2 = 1, fib3 = 1;
   // res to count the number of fibonacci
   int res = 0;
   while (fib1 <= last){
      if (fib1 >= start){
         res++;
      }
      fib1 = fib2;
      fib2 = fib3;
      fib3 = fib1 + fib2;
   }
   return res;
}
// main function
int main(){
   int start = 6, last = 100;
   cout << "Number of fibonacci Numbers in the series are "
   << count_fibonacci(start, last);
   return 0;
}
