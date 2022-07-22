#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
getline(cin,s);
int n;








// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;
cin>>n;
vector<string>h;
vector<int>v;
for(int i=0;i<n;i++){
	string x;
	cin>>x;
h.push_back(x);
}








// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;


int flag=0;
for(int i=0;i<n;i++){
	for(int j=0;j<s.size();j++){
		if(s.substr(j,h[i].size())==h[i]){
			flag=1;
		}
	}


    





// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;
	if(flag!=0){
		cout<<"YES"<<endl;
		flag=0;
	}else{



        





// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;
		cout<<"NO"<<endl;
	}
}








// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;
}