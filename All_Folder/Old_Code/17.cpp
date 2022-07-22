
#include <iostream>
using namespace std;

int main() {   
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout); 
long long int n;
cin >> n;
while (true) {
cout << n << " ";
if (n == 1) break;
if (n%2 == 0) n /= 2;
else n = n*3+1;
}
cout << "\n";
}