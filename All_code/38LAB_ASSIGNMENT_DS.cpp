#include <bits/stdc++.h>
using namespace std;


struct information{
    char name[100];
    int age;
    char address[80];
    int Rollno;
};

int main(){
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

information *p,d,arr[10];
p = &d;
cout << "Enter name, age, address and roll number: " << endl;
cin >> (*p).name;
cin >> (*p).age;
cin >> (*p).address;
cin >> (*p).Rollno;
cout << "Size of pointer ==> " << sizeof(*p) << endl;

for(int i = 0; i < 10; i++){
    cout << "Enter name, age, address and roll number: " << endl;
cin >> arr[i].name;
cin >> arr[i].age;
cin >> arr[i].address;
cin >> arr[i].Rollno;
}

cout << "Size of ten students ==> " << sizeof(arr) << endl;

}