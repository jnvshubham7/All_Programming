#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
   if(c==0){
       if(a>=b){
           cout<<"Takahashi"<<endl;}
           else{
               cout<<"Aoki"<<endl;
           }
       }
           else if(c==1){
            if(b>=a){
           cout<<"Aoki"<<endl;}
           else{
               cout<<"Takahashi"<<endl;
           }
           }
           else{
               cout<<""<<endl;
           }       
   
	return 0;
}
