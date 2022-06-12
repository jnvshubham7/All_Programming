



// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
	return b;
	if (b == 0)
	return a;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

// Driver program to test above function
int main()
{
	int a = 98, b = 56;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}













// // C++ program to find GCD of two numbers
// #include <iostream>
// using namespace std;
// // Recursive function to return gcd of a and b
// int gcd(int a, int b)
// {
// 	if (b == 0)
// 		return a;
// 	return gcd(b, a % b);
	
// }

// // Driver program to test above function
// int main()
// {
// 	int a = 98, b = 56;
// 	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
// 	return 0;
// }











// // C++ program to find GCD of two numbers
// #include <bits/stdc++.h>
// using namespace std;

// int static dp[1001][1001];

// // Function to return gcd of a and b
// int gcd(int a, int b)
// {
// 	// Everything divides 0
// 	if (a == 0)
// 		return b;
// 	if (b == 0)
// 		return a;

// 	// base case
// 	if (a == b)
// 		return a;
	
// 	// if a value is already
// 	// present in dp
// 	if(dp[a][b] != -1)
// 		return dp[a][b];

// 	// a is greater
// 	if (a > b)
// 		dp[a][b] = gcd(a-b, b);
	
// 	// b is greater
// 	else
// 		dp[a][b] = gcd(a, b-a);
	
// 	// return dp
// 	return dp[a][b];
// }

// // Driver program to test above function
// int main()
// {
// 	int a = 98, b = 56;
// 	memset(dp, -1, sizeof(dp));
// 	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
// 	return 0;
// }






