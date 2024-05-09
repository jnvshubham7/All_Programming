#include<bits/stdc++.h>
using namespace std;

int main(){

    int age=14;

    try{

        if(age>=18){
            cout<<"Access granted - you are old enough."<<endl;
        }else{
            throw(age);
        }

    }

    catch(int myNum){
        cout<<"Access denied - You must be at least 18 years old."<<endl;
        cout<<"Age is: "<<myNum<<endl;
    }



    


    return 0;
}