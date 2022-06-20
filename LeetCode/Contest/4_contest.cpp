#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

 ll i,j,k;
    ll n,count=0;
    string s;char x,y;
    deque<char> ch;


    map<char,char> clo;

    clo['}']='{';
    clo['>']='<';
    clo[']']='[';
    clo[')']='(';


    cin>>s;
    n=s.length();

    for(i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[' || s[i]=='<')
            ch.push_back(s[i]);

        else
        {
            if(ch.size()==0)
            {
                cout<<"Impossible";return 0;
            }

            if(clo[s[i]]==ch.back())
                ch.pop_back();
            else
            {
                ch.pop_back();
                count++;
            }

        }
    }

    if(ch.size()==0)
        cout<<count<<endl;
    else
        cout<<"Impossible"<<endl;

    }
    //freopen("in.txt","r",stdin);
   

    return 0;
} 
