// C++ code to demonstrate working of
// size() and max_size()
#include<iostream>
#include<array> // for size() and max_size()
using namespace std;
int main()
{
	// Initializing the array elements
	array<int,6> ar = {1, 2, 3, 4, 5, 6};

	// Printing number of array elements
	cout << "The number of array elements is : ";
	cout << ar.size() << endl;

	// Printing maximum elements array can hold
	cout << "Maximum elements array can hold is : ";
	cout << ar.max_size() << endl;

	return 0;

}
