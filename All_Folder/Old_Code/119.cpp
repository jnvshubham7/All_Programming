#include <iostream>
using namespace std;
int main()

{
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int a,b,c;
    cin>>a>>b>>c;
    sort(a,b,c);
    cout<<a<<b<<c;
    return 0;

}
