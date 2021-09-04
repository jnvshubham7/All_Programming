#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout); 
	int A,B,C,D,T;
	cin >>T;	
	for(int i=0;i<T;i++){
		cin>>A>>B>>C>>D;
		if(A*B>=C*D){
			cout<<"1"<<endl;
		
	}	else{
		cout<<"2"<<endl;
	}		
	}						
	
}