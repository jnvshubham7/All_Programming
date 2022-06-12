#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int  n1;
        int  sum=0;
        if(n>=100)
        {
            n1=n/100;
            n=n%100;
            sum=sum+n1;
        }
        if(n>=50)
        {
            n1=n/50;
            n=n%50;
            sum=sum+n1;
        }
        if(n>=10)
        {
            n1=n/10;
            n=n%10;
            sum=sum+n1;
        }
        if(n>=5)
        {
            n1=n/5;
            n=n%5;
            sum=sum+n1;
        }
        if(n>=2)
        {
            n1=n/2;
            n=n%2;
            sum=sum+n1;
        }
        if(n>=1)
        {
            sum++;
        }
        
        
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
