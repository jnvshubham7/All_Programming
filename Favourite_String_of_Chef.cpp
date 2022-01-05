#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;

		string s1="code";
		string s2="chef";

		int code1=0;
		int chef1=0;

		for(int i=0;i<n;i++){
			if(s.substr(i,4)==s1){

				code1=i;
				break;

			}

		}


		for(int i=0;i<n;i++){
			if(s.substr(i,4)==s2){

				chef1=i;
				break;
			}
		}

		if(code1<chef1){
			cout<<"AC"<<endl;

		}

		else {
			cout<<"WA"<<endl;
		}
	}

	return 0;
}