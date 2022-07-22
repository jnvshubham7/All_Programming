#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, k;
	cin >> n >> k;
	int marks[n];
	long long markscou[k + 1] = {0};
	for(int i = 0; i < n; i++){\
		cin >> marks[i];
		if(marks[i] >= 0 && marks[i] <= k){
			markscou[marks[i]]++;
		}
	}
	long long sum = 0;
	for(int i = 0; i <= k / 2; i++){
		if(i != k - i){
			sum += (markscou[i] * markscou[k - i]);
		}else{
			sum += (markscou[i] * (markscou[i] - 1)) / 2;
		}
	}
	cout << sum;
	return 0;
}