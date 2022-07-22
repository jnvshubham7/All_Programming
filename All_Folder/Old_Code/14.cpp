#include <iostream>
#include <iomanip>
#include <limits>
using namespaces std;
int main()
{
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int i=4;
    double d=4.0;
    string s= "HackerRank";
    string str{};
    int a;
    double b{0.0};
    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin,str);
    cout<<a+i<<endl;
    cout<<fixed<<setprecision(1)<<b+d<<endl;
    cout<<s + str;
    return 0;

}