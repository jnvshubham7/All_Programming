#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int n;
		int count=0,count1=0;

	    cin>>n;
		string s;
		cin>>s;

	    for(int i=0;i<n;i++){

			if(s[i]=='0')
				count++;
			else
				count1++;


		}

		if(n<4)
		cout<<"0"<<endl;
		else if(count>=2 && count1>=2)
		{
			if(count>count1)
			cout<<(count1-1)<<endl;
			else 
			cout<<(count-1)<<endl;
		}
		else 
		cout<<"0"<<endl;
	    }

		return 0;
}
