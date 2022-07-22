#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        
        //create two array of  n

        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }


        //swap all element in both array all max element in a and min element in b


       //compare both array with same index and swap if a[i]>b[i]

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(b[i],a[i]);
            }
        }
        // for(int i=0;i<n;i++){
        //     if(a[i]>b[i]){
        //         swap(a[i],b[i]);
        //     }



          //print both array


        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";

        // }

        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<b[i]<<" ";

        // }

        // cout<<endl;





       




         //find max element in m and n

        // int m=a[0];
        // int k=b[0];
        // for(int i=0;i<n;i++){
        //     if(m<a[i]){
        //         m=a[i];
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(k<b[i]){
        //         k=b[i];
        //     }
        // }

        // //cout<<m<<" "<<k<<endl;

        // //check which is max  in m and k


        // if(m>k){
        //     //swap k value with same index in b
        //     for(int i=0;i<n;i++){
        //         if(b[i]==k){
        //             swap(b[i],a[i]);
        //         }
        //     }
        // }
        // else{
        //     //swap m value with same index in a
        //     for(int i=0;i<n;i++){
        //         if(a[i]==m){
        //             swap(a[i],b[i]);
        //         }
        //     }
           


           // cout<<k<<endl;
       // }

        //print both array


        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }

        // cout<<endl;








        // for(int i=0;i<n;i++){
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;


        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;




        //find max element in m and n

        int m1=a[0];
        int k1=b[0];
        for(int i=0;i<n;i++){
            if(m1<a[i]){
                m1=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(k1<b[i]){
                k1=b[i];
            }
        }


// //multiply m and k

        int ans=m1*k1;
        cout<<ans<<endl;

      //  cout<<m<<" "<<k<<endl;


        //multiply m and 


        // int ans=m*k;
        // cout<<ans<<endl;


        //


        // int a[m],b[n];
        // for(int i=0;i<m;i++){
        //     cin>>a[i];
        // }
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }

        // //find max element in m and n
        // int max_m=a[0],max_n=b[0];
        // for(int i=1;i<m;i++){
        //     if(a[i]>max_m){
        //         max_m=a[i];
        //     }
        // }
        // for(int i=1;i<n;i++){
        //     if(b[i]>max_n){
        //         max_n=b[i];
        //     }
        // }

        // //multiply max element of m and n
        // int max_m_n=max_m*max_n;

        // cout<<max_m_n<<endl;





        // int max=0;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(a[i]*b[j]>max){
        //             max=a[i]*b[j];

        //         }
        //     }
        // }
        // cout<<max<<endl;



    }

    return 0;
}