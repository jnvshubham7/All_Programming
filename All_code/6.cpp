#include<bits/stdc++.h>
using namespace std;

 int main(){

    #ifndef ONLINE_JUDGE

      freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        long long int a,b;
        cin >> a >> b;
        if(a > b)
        cout << ">" << endl;
        if(a < b)
        cout << "<" << endl;
        if(a == b)
        cout << "=" << endl;
    }
    return 0;
}
