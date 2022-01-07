// C++ code to demonstrate working of
// insert_after(), emplace_after() and erase_after()
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	// Initializing forward list
	forward_list<int> flist = {10, 20, 30} ;
	
	// Declaring a forward list iterator
	forward_list<int>::iterator ptr;

	// Inserting value using insert_after()
	// starts insertion from second position
	ptr = flist.insert_after(flist.begin(), {1, 2, 3});
	
	// Displaying the forward list
	cout << "The forward list after insert_after operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;
	
	// Inserting value using emplace_after()
	// inserts 2 after ptr
	ptr = flist.emplace_after(ptr,2);
	
	// Displaying the forward list
	cout << "The forward list after emplace_after operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;
	
	// Deleting value using erase.after Deleted 2
	// after ptr
	ptr = flist.erase_after(ptr);
	
	// Displaying the forward list
	cout << "The forward list after erase_after operation : ";
	for (int&c : flist)
		cout << c << " ";
	cout << endl;

	return 0;
}
