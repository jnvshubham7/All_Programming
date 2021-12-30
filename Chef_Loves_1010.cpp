#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int n;
	    cin>>n;
	    int count = 0;
	    string str;
	    cin>>str;
	    int a = 0, b = 0;
	    for(int i=0; i<n; i++)
	        if(str[i]=='1')
	            a++;
	        
	        else
	            b++;
	        
	    
	        int sol = 0;
	        sol = max(sol, min(a,b)-1);
	        cout<<sol<<endl;
	    }
}
