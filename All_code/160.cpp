// CPP program to illustrate
// Application of erase() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    	int arr[] = {2,3,4,5,6,7,8};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> myvector{arr , arr + n};
int ans = arr[0];
	for (auto i = myvector.begin(); i != myvector.end(); ++i) {
      //  auto it = find(myvector.begin(), myvector.end(), arr[i]);
	ans =(ans&myvector.at(i));
    	// ans = (ans&[i]);
        // 	if (ans == 0) {
        // 		myvector.erase(i);
        // 		i--;
        // 	}
			
		
	}

	// Printing the vector
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
