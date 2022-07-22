// C++ code to demonstrate forward list
// and assign()
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	// Declaring forward list
	forward_list<int> flist1;

	// Declaring another forward list
	forward_list<int> flist2;

	// Assigning values using assign()
	flist1.assign({1, 2, 3});

	// Assigning repeating values using assign()
	// 5 elements with value 10
	flist2.assign(5, 10);

	// Displaying forward lists
	cout << "The elements of first forward list are : ";
	for (int&a : flist1)
		cout << a << " ";
	cout << endl;
	
	cout << "The elements of second forward list are : ";
	for (int&b : flist2)
		cout << b << " ";
	cout << endl;

	return 0;
}
