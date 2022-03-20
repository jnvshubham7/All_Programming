#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    //sort array.
    sort(arr, arr+n);
    bool flag = false;


 //arr[0]/2 (rounded up to the nearest integer)
    int ans = arr[0]/2;
    
    


    //if any element is less than then subtract it from x. and count++
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]<x){
            x-=arr[i];
            count++;







            //when x<arr[i] then we can't subtract any more. so break.
            // if(x<arr[i]){
            //      if(arr[i]/2<x){
            //     x-=arr[i]/2;
            //    // count2++;
            //     count++;
                
            //     break;
            // }
            // else {
            //     break;
            // }
            //     flag = true;


            //     break;
            // }












        }

        else {
            //arr[i]/2 (rounded up to the nearest integer)
            if(arr[i]/2<x){
                x-=arr[i]/2;
                count++;
            }
            else {
                break;
            }
            //  if(arr[i]/2<x){
            //     x-=arr[i]/2;
            //    // count2++;
            //     count++;
                
            //     break;

            //  }
            //     else {
            //         break;
            //     }
            
        }












    }

    cout<<count<<endl;

    

    // if(flag){
    //     //then check arr[i]/2 <x     then count++
    //     for(int i = 0; i<n; i++){
           
    //     }

    //    cout<<(count+count2)<<endl;
        
    // }
    // else{
    //     cout<<count<<endl;
    // }

   


    //find the number of elements which are greater than x.
    // int ans = 0;
    // for(int i = 0; i<n; i++){
    //     if(arr[i]>x){
    //         ans++;
    //     }
    // }

    // cout<<ans<<endl;
    


}

    return 0;
}