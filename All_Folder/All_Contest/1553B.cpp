#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>


int left(string s, string t, int i, int x)
{
    while (x < t.length() && i >= 0)
    {
        if (t[x] == s[i])
        {
            x++;
            i--;
        }
        else
        {
            return 0;
        }
    }
    if (x == t.length())
    {
        return 1;
    }
    return 0;
}
 
int right(string s, string t, int i, int x)
{
    if (x == t.length())
    {
        return 1;
    }
   
 
    int r1 = 0, r2 = 0;
    if (i - 1 >= 0 && s[i - 1] == t[x])
    {
        r1 = left(s, t, i - 1, x);
    }
    if (r1)
    {
        return 1;
    }
    if (i + 1 < s.length() && s[i + 1] == t[x])
    {
        r2 = right(s, t, i + 1, x + 1);
    }
 
    return (r1 || r2);
}


int main(){

ll t;
cin>>t;
while(t--){
 
            string s, t;
        cin >> s >> t;
 
        int f = 0;
        int l = t.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[0])
            {
                f = right(s, t, i, 1);
                if (f == 1)
                {
                    break;
                }
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }




   
    }



    return 0;
}