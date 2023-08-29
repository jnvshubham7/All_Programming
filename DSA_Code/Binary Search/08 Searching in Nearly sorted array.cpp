// https://www.geeksforgeeks.org/search-almost-sorted-array/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
	





int binarySearch(int arr[], int l, int r, int x)
{
while(l<=r)
{
		int mid = l + (r - l) / 2;

		// If the element is present at
		// one of the middle 3 positions
		if (arr[mid] == x)
			return mid;
		if (mid > l && arr[mid - 1] == x)
			return (mid - 1);
		if (mid < r && arr[mid + 1] == x)
			return (mid + 1);

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 2, x); // this time check on mid-2 cz mid-1 is already checked

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 2, r, x); // this time check on mid+2 cz mid+1 is already checked
}

	// We reach here when element is not present in array
	return -1;
}





int main(){
//Solution s;

ll t=1;
//cin>>t;
while(t--){

// 	Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2 

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1



int arr[] = {10, 3, 40, 20, 50, 80, 70};
int n = sizeof(arr) / sizeof(arr[0]);
int x = 40;

// int arr[] = {10, 3, 40, 20, 50, 80, 70};
// int n = sizeof(arr) / sizeof(arr[0]);
// int x = 90;
int result = binarySearch(arr, 0, n - 1, x);
cout<<result<<endl;



}

	return 0;
}