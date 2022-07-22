#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

 
 
int main()
{
    int t;
ios::sync_with_stdio(false);
cin.tie(0);
    cin>>t;
    while(t--)
    {
        int x,x1,y,y1;
        cin>>x>>x1;
        cin>>y>>y1;
        int m=x,n=y;
        int m1=0,n1=0;
        while(m>=10)
        {
            m/=10;
            m1++;
        }
        while(n>=10)
        {
            n/=10;
            n1++;
        }
        if(m1>n1)
        {
            int z=m1-n1;
            while(z--&&y1)
            {
                y*=10;
                y1--;
            }
        }
        else if(n1>m1)
        {
            int z=n1-m1;
            while(z--&&x1)
            {
                x*=10;
                x1--;
            }
        }
        if(x1>y1)cout<<">"<<endl;
        else if(x1<y1)cout<<"<"<<endl;
        else {
            if(x>y)cout<<">"<<endl;
            else if(x<y)cout<<"<"<<endl;
            else if(x==y)cout<<"="<<endl;
        }
    }
}