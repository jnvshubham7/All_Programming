#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    
    int firstnumber, secondnumber, sumoftwonumber;

    cout << "enter two integer: ";
    cin >> firstnumber >> secondnumber;

    sumoftwonumber = firstnumber + secondnumber;

    cout<< firstnumber << "+" << secondnumber << "=" << sumoftwonumber;

    return 0;
}