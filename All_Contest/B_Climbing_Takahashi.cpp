#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;



   
        int n;
        cin>>n;
        int arr[n];
        int i;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }

      for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i])
        continue;
        else{
          cout<<arr[i]<<endl;
          break;
        }
        
      }


    

    return 0;
}