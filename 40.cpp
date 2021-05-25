#include <bits/stdc++.h>
#define sync                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pb(a) push_back(a);
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define loop(i, c, d) for (int i = c; i <= d; i++)
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    ll  n;
    while (t--)
    {
        cin >> n;
        ll i=n-1;
      ll check =n;

       while(i>=sqrt(n))
       { 
           check = check  &i;
           if(check==0)
           {
           cout<<i<<endl;
           break; 
           }
           i--;

       }

    }
}