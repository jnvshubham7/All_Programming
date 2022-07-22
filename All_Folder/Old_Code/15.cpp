#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
     int n;
    float pom,pfc,itp,fee,lal,phy;
    cin>>pom>>pfc>>itp>>fee>>lal>>phy;
    float ans= 2*pom+2*pfc+4*(itp+fee+lal+phy);
    ans=ans/20;
    cout<<ans;
}