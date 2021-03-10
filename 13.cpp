#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int a=0;
        if(s[0]==s[1])
        {
            cout<<"NO"<<endl;
            a=1;

        }
        else {
            for(int i=0; i<s.length()-2; i++)
            {
                if (s[i]!=s[i+2])
                {
                    cout<<"NO"<<endl;
                    a=1;
                    break;

                }
            }
            if(a==0)
            {
                cout<<"YES"<<endl;

            }
        }
    }
    return 0;
}