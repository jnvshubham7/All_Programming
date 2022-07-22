#include <bits/stdc++.h>
using namespace std;
#include <math.h>
int getresult(int arr[], int n){
   int min=0,max=0;
   /*If there is only one element then return it as min and max both*/
   if (n == 1)
      { min=max=arr[0]; }
   /* If there are more than one elements, then initialize min and max*/
   if (arr[0] > arr[1]){
      max = arr[0];
      min = arr[1];
   }
   else{
      max = arr[1];
      min = arr[0];
   }
   for (int i = 2; i<n; i++){
      if (arr[i] > max)
         max = arr[i];
      else if (arr[i] < min)
         min = arr[i];
   }

   cout<<"Minimum element: "<<min<<endl;
   cout<<"Maximum element: "<<max<<endl;
}
/* Driver program to test above function */
int main(){

     freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);



     int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
   
   getresult (arr, n);

   return 0;
}