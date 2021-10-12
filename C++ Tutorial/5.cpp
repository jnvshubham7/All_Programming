#include<bits/stdc++.h>
using namespace std;
#include <vector>
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

 vector<int> v;
v.push_back(3); // [3]
v.push_back(2); // [3,2]
v.push_back(5); // [3,2,5]
//v.pop_back(5);
cout << v[0] << "\n"; // 3
cout << v[1] << "\n"; // 2
cout << v[2] << "\n"; // 5


// result: [(1,2),(1,5),(2,3)]

    return 0;
}