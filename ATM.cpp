#include <iostream>
using namespace std;

int main() {
	int a;
	double b;
	cin>>a;
	cin>>b;
	double r;
	if(a%5 == 0)
	{
	    if(a<b && ((a+0.5)<=b))
	    {
	        r=b-a-(0.5);
	        cout<<r<<endl;
	        
	    }
	    else
	    cout<<b<<endl;
	    
	}
	else 
	{
	    cout<<b<<endl;
	    
	}
	return 0;
}
