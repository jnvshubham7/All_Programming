// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	// Take any string
	string s = "dog:cat";

	// Find position of ':' using find()
	int pos = s.find(":");

	// Copy substring before pos
	string sub = s.substr(0 , pos);

	// prints the result
	cout << "String is: " << sub;

	return 0;
}
