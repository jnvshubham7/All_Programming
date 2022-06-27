#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    int n;
    cin>>n;

    //array 
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //sort
    sort(a,a+n);

    //reverse
    reverse(a,a+n);

    //
}