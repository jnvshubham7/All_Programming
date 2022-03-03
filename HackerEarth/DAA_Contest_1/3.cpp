#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int mod=1e9+7;

	int a[n+1];
	a[1]=1;
	a[2]=2;

	for(int i=3;i<=n;i++) {
		a[i]=(a[i-1]+a[i-2])%mod;
	}
	cout<<a[n];

	return 0;
}



















// // C++ program to count the
// // no. of ways to place 2*1 size
// // tiles in 2*n size board.
// #include <bits/stdc++.h>
// using namespace std;

// int getNoOfWays(long long int n)
// {
// 	// Base case
// 	if (n <= 2)
// 	return n;

// 	return getNoOfWays(n - 1) + getNoOfWays(n - 2);
// }

// // Driver Function
// int main()
// {
//     long long int n;
//     cin>>n;
//     cout<<getNoOfWays(n);

// 	return 0;
// }
