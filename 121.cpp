#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)


   

   
void solution() {

     fileio;
    int i, j, k, n, m;
    cin>>k;
    i=1,j=1;
    while (i<=k)
    {
        if (j%3!=0 && j%10 !=3 )
        {
            n=j;
            i++;
        }
        j++;
    }
    cout<<n<<endl;
}