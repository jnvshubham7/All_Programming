#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //select a[i] and a[i+1] then check if they are equal or not
    //if they are equal then change a[i] to 0  and count ++
    //if they are not equal then find min(a[i],a[i+1]) or change both to min(a[i],a[i+1])
//count++

    int count=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            a[i]=0;
            count++;
            i++;
        }
        else{

            if(a[i]>a[i+1]){
                a[i]=a[i+1];
            }
            else{
                a[i+1]=a[i];
            }

            count++;
            i++;

           


        }
    }


    cout<<count<<endl;

   
   


}

    return 0;
}