// C++ code to demonstrate working of swap()
#include<iostream>
#include<array> // for swap() and array
using namespace std;
int main()
{

	// Initializing 1st array
	array<int,6> ar = {1, 2, 3, 4, 5, 6};

	// Initializing 2nd array
	array<int,6> ar1 = {7, 8, 9, 10, 11, 12};

	// Printing 1st and 2nd array before swapping
	cout << "The first array elements before swapping are : ";
	for (int i=0; i<6; i++)
	cout << ar[i] << " ";
	cout << endl;
	cout << "The second array elements before swapping are : ";
	for (int i=0; i<6; i++)
	cout << ar1[i] << " ";
	cout << endl;

	// Swapping ar1 values with ar
	ar.swap(ar1);

	// Printing 1st and 2nd array after swapping
	cout << "The first array elements after swapping are : ";
	for (int i=0; i<6; i++)
	cout << ar[i] << " ";
	cout << endl;
	cout << "The second array elements after swapping are : ";
	for (int i=0; i<6; i++)
	cout << ar1[i] << " ";
	cout << endl;

	return 0;

}
