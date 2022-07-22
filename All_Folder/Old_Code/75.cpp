// #include <bits/stdc++.h> 
// using namespace std;



	
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){

     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	int arr[n];
	int freq[1000009];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		++freq[arr[i]];
	}
	for (int i = 0; i < n; ++i)
	{
		if(freq[arr[i]]>1){
			cout<<i+1<<" ";
			break;
		}
	}
}