#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {

     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    // int n, t=0;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
        string a,b;
        cin>>a>>b;
        if(a.length()!=b.length())
        {
            cout<<"NO\n";
        }
        else
        {
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a != b)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
    //}

    return 0;
}