#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        
        int low = 0, mid = 0, high = n-1;
    
    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
                
            case 1:
                mid++;
                break;
                
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
        // coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends 
 
 



























































// // //  void swap(int *a, int *b) {
// // //   int temp = *a;
// // //   *a = *b;
// // //   *b = temp;
// // // }

// // // void selectionSort(int array[], int size) {
// // //   for (int step = 0; step < size - 1; step++) {
// // //     int min_idx = step;
// // //     for (int i = step + 1; i < size; i++) {

      
// // //       if (array[i] < array[min_idx])
// // //         min_idx = i;
// // //     }

    
// // //     swap(&array[min_idx], &array[step]);
// // //   }
// // // }


// // public:
// //     void sort012(int a[], int n)
// //     {
        
         
 
 
// //  void swap(int *a, int *b) {
// //   int temp = *a;
// //   *a = *b;
// //   *b = temp;
// // }

// // void selectionSort(int array[], int size) {
// //   for (int step = 0; step < size - 1; step++) {
// //     int min_idx = step;
// //     for (int i = step + 1; i < size; i++) {

      
// //       if (array[i] < array[min_idx])
// //         min_idx = i;
// //     }

    
// //     swap(&array[min_idx], &array[step]);
// //   }
// // }
// //         // coode here 
// //     }
    
// // };




// public:
//     void sort012(int a[], int n) {

//   for (int step = 0; step < size - 1; step++) {
//     int min_idx = step;
//     for (int i = step + 1; i < n; i++) {
//       if (a[i] < a[min_idx])
//         min_idx = i;
//     }
//     swap(a[min_idx],a[step]);
//   }

    
// };