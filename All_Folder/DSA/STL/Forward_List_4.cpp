// C++ code to demonstrate working of remove() and
// remove_if()
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	// Initializing forward list
	forward_list<int> flist = {10, 20, 30, 25, 40, 40};
	
	// Removing element using remove()
	// Removes all occurrences of 40
	flist.remove(40);
	
	// Displaying the forward list
	cout << "The forward list after remove operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;
	
	// Removing according to condition. Removes
	// elements greater than 20. Removes 25 and 30
	flist.remove_if([](int x){ return x>20;});
	
	// Displaying the forward list
	cout << "The forward list after remove_if operation : ";
	for (int&c : flist)
	cout << c << " ";
	cout << endl;

	return 0;

}
