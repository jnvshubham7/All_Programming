#include<bits/stdc++.h>
using namespace std;

int main(){

   int x = 10;
int* ptr = &x;

// Access the value of x through ptr
cout << *ptr << endl;  // Output: 10
cout << ptr << endl;   // Output: Address of x

// Modify the value of x through ptr
*ptr = 20;
cout << x << endl;  // Output: 20
cout << ptr << endl;  // Output: 20


    return 0;
}