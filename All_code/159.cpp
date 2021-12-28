// C++ program to find bitwise AND
// of all the elements in the array
#include <bits/stdc++.h>
using namespace std;


int find_and(int arr[], int len){
		
	// Initialise ans variable is arr[0]
	int ans = arr[0];

	// Traverse the array compute AND
	for (int i = 0; i < len; i++){
		ans = (ans&arr[i]);
    if (ans == 0)
        
	}
	// Return ans
	return ans;
}

// Driver function
int main()
{
	int arr[] = {2,3,4,5,6,7,8};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call to find AND
	cout << find_and(arr, n);
	return 0;
}

// This code is contributed by sapnasingh4991
