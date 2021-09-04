// CPP program to find the least frequent element 
// in an array. 
#include <bits/stdc++.h> 

using namespace std; 

  

int leastFrequent(int arr[], int n) 
{ 
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

    // Sort the array 

    sort(arr, arr + n); 

  

    // find the min frequency using linear traversal 

    int min_count = n+1, res = -1, curr_count = 1; 

    for (int i = 1; i < n; i++) { 

        if (arr[i] == arr[i - 1]) 

            curr_count++; 

        else { 

            if (curr_count < min_count) { 

                min_count = curr_count; 

                res = arr[i - 1]; 

            } 

            curr_count = 1; 

        } 

    } 

   

    // If last element is least frequent 

    if (curr_count < min_count) 

    { 

        min_count = curr_count; 

        res = arr[n - 1]; 

    } 

  

    return res; 
} 

  
// driver program 

int main() 
{ 

    int arr[] = {1, 3, 2, 1, 2, 2, 3, 1}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << leastFrequent(arr, n); 

    return 0; 
} 
