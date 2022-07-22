// CPP program to illustrate
// Application of push_back and pop_back function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int count = 0;
	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	myvector.push_back(6);
	while (!myvector.empty()) {
		count++;
		myvector.pop_back();
	}
	cout << count;
	return 0;
}
