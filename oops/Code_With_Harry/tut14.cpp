#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    enum Meal m1 = lunch;
    cout<<(m1==1);
    cout<<breakfast;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // money m1;  // you can also write like this union money m1;
    // m1.rice = 34;
    // // m1.car = 'c';
    // cout<<m1.rice;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
