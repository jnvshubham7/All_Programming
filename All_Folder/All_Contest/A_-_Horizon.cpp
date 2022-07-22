#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll x;
cin>>x;
//ans= xsqrt(12800000+x)
//ans= xsqrt(12800000+x)

//dobule 2 digit after decimal point

//find double  ans


double ans= sqrt(x*12800000+x*x);

//print 2 digit after decimal point
cout<<fixed<<setprecision(2)<<ans<<endl;


    return 0;
}