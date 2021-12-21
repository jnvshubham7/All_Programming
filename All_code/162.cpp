#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;
void mapDemo(){
	map<int, int> A;
	A[1] = 100;
	A[2] = -1;
	A[3] = 200;
	A[100000232] = 1;
	//to find the value of a key
	//A.find(key)
	
	//to delete the key
	//A.erase(key)
	
	map<char, int> cnt;
	string x = "Sumant Tirkey";
	
	for(char c:x){
		cnt[c]++;//map the individual character with it's occurance_Xtimes
	}
	
	//see  how many times a and z occures in my name
	cout<< cnt['a']<<" "<<cnt['z']<<endl;
	
} 
	
int main() {
	mapDemo();
	return 0;
}