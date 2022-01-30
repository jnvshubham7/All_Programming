#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
       

        //scan array
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        //sort array
        sort(a,a+n);
        //print array
       
       
       //which elemment is not same try to same all element in array and count++
         int count=0;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                count++;
            }
        }
        





        //check all element in array is same or not
        // for(int i=0;i<n-1;i++){
        //     if(a[i]==a[i+1]){
        //         cout<<"0"<<endl;
        //        // return 0;
        //     }

        //     // else {
        //     //     cout<<"1"<<endl;
        //     //     //return 1;
        //     // }
        // }



    




        





    }

    return 0;
}