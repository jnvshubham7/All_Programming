#include<bits/stdc++.h>
using namespace std;
#define ll long long

//is prime function
bool isprime(int num){
    //check num is prime or not
    if(num<=1)
    {
        return false;
    }
    else if(num==2)
    {
        return true;
    }
    else if(num%2==0)
    {
        return false;
    }
    else
    {
        for(int i=3;i<=sqrt(num);i+=2)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main(){

ll a,b;
cin>>a>>b;
ll x,y;
cin>>x>>y;
//if a+x || b+y || a+y || b+x is prime then print yes
//if a+x || b+y || a+y || b+x is not prime then print no

if(isprime(a+x) || isprime(b+y) || isprime(a+y) || isprime(b+x))
{
    cout<<"Aoki"<<endl;


}
else
{
    cout<<"Takahashi"<<endl;
}


    return 0;
}