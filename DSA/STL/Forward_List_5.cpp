// C++ code to demonstrate working of
// splice_after()
#include<iostream>
#include<forward_list> // for splice_after()
using namespace std;

int main()
{
	// Initializing forward list
	forward_list<int> flist1 = {10, 20, 30};
	
	// Initializing second list
	forward_list<int> flist2 = {40, 50, 60};
	
	// Shifting elements from first to second
	// forward list after 1st position
	flist2.splice_after(flist2.begin(),flist1);
	
	// Displaying the forward list
	cout << "The forward list after splice_after operation : ";
	for (int&c : flist2)
	cout << c << " ";
	cout << endl;

	return 0;
}
