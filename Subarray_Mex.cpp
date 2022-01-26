#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k,x;
        //n— the length of the required array, 
        //k-the length of subarrays to be checked,
        //x- the required MEX value of the subarrays.


        cin>>n>>k>>x;

        //find n number of subarrays which MEX is x





        //print the required number of subarrays which MEX is x


        























//         // C++ program for the above approach

// #include <bits/stdc++.h>
// using namespace std;

// // Function to return maximum MEX of
// // all K length subarray
// void maxMEX(int arr[], int N, int K)
// {
// 	// Stores element from 1 to N + 1
// 	// is nor present in subarray
// 	set<int> s;

// 	// Store number 1 to N + 1 in set s
// 	for (int i = 1; i <= N + 1; i++)
// 		s.insert(i);

// 	// Find the MEX of K length subarray
// 	// starting from index 0
// 	for (int i = 0; i < K; i++)
// 		s.erase(arr[i]);

// 	int mex = *(s.begin());

// 	// Find the MEX of all subarray of
// 	// length K by erasing arr[i]
// 	// and inserting arr[i-K]
// 	for (int i = K; i < N; i++) {
// 		s.erase(arr[i]);

// 		s.insert(arr[i - K]);

// 		// Store first element of set
// 		int firstElem = *(s.begin());

// 		// Updating mex
// 		mex = max(mex, firstElem);
// 	}

// 	// Print maximum MEX of all K
// 	// length subarray
// 	cout << mex << ' ';
// }

// // Driver Code
// int main()
// {
// 	// Given array
// 	int arr[] = {1, 0, 1, 1 };

// 	// Given length of subarray
// 	int K = 3;

// 	// Size of the array
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	// Function Call
// 	maxMEX(arr, N, K);

// 	return 0;
// }






    }

    return 0;
}