#include <iostream>
typedef long long int ll;
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2)
        {
            n*=3;
            n+=1;
            cout<<n<<" ";
        }
        else
        {
            n/=2;
            cout<<n<<" ";
        }
    }
}