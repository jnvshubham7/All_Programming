// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of digits of n
int numberOfDigits(int n)
{
	int cnt = 0;
	while (n > 0) {
		cnt++;
		n /= 10;
	}
	return cnt;
}

// Function to print the left shift numbers
int cal(int num)
{
  
  int sum=0;
	int digits = numberOfDigits(num);
	int powTen = pow(10, digits - 1);

	for (int i = 0; i < digits - 1; i++) {

		int firstDigit = num / powTen;

		// Formula to calculate left shift
		// from previous number
		int left
			= ((num * 10) + firstDigit)
			- (firstDigit * powTen * 10);
		//cout << left << " ";
      sum+=left;

		// Update the original number
		num = left;
	}
 return sum;
  
}

// Driver Code
int main()
{
	int num;
    cin >> num;
	cal(num);
  int sum=cal(num);
  cout<<sum+num;
	return 0;
}
