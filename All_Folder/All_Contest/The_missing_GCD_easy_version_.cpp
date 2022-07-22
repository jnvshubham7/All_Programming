#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //create two loop for array and find gcd of every two element
    int gcd=0;
      vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            gcd=__gcd(a[i],a[j]);

            //store all gcd in vector
          
            v.push_back(gcd);



        }
    }




//Print the smallest positive integer g, such that  all element of vector is not divisible by g

//iterate through vector and find the smallest positive integer g, such that  all element of vector is not divisible by g




    // int min=INT_MAX;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]<min){
    //         min=v[i];
    //     }







     sort(v.begin(),v.end());

     //iterate 1 to INT_MAX check all element in vector not divisible by i
        // for(int i=1;i<=INT_MAX;i++){
        //     bool flag=true;
        //     for(int j=0;j<v.size();j++){
        //         if(v[j]%i!=0){
        //             flag=false;
        //            // break;
        //         }
        //     }
        //     if(flag){
        //         cout<<i<<endl;
        //         break;
        //     }
        // }








        // for(int i=1;i<=INT_MAX;i++){
        //     if(v[v.size()-1]%i!=0){
        //        // cout<<i<<endl;

        //        //also check if all element in vector is not divisible by i
        //         bool flag=true;
        //         for(int j=0;j<v.size();j++){
        //             if(v[j]%i!=0){
        //                 flag=false;
        //                 break;
        //             }
        //         }
        //         if(flag){
        //             cout<<i<<endl;
        //             break;
        //         }

        //         //else i++ and check again


        //         else {
        //             continue;
        //         }
            
        //         //break;
        //     }
        // }

        // cout<<min<<endl;


    // int flag=0;




    // sort(v.begin(),v.end());
    // int flag=0;

    // for(int i=0;i<v.size();i++){
    //     if(v[i]==1){
    //         flag=1;
    //         cout<<v[i]<<endl;
    //         break;
    //     }
    // }

    // if(flag==0){
    //     cout<<v[0]<<endl;
    // }







//iterate 1 to INT_MAX check all element in vector not divisible by i 
//count++ if count==v.size() then print i







int count=0;
    
        for(int i=1;i<=INT_MAX;i++){
           // bool flag=true;
            for(int j=0;j<v.size();j++){
                if(v[j]%i!=0){
           // count++ if count==v.size() then print i
           //else count ++ and i++ and check again


                    count++;



                }
                
            }
            if(count==v.size()){
                cout<<i<<endl;
                break;
            }
            else{
                count=0;
                continue;
            }
        }



                    // if(count==v.size()){
                    //     cout<<i<<endl;
                    //     break;
                    // }
                    // else{
                    //     count++;
                    //     continue;


                    // }

        //         }
        //         // else{
        //         //     count++;
        //         // }
        //     }
        //    // count=0;
        // }







          


//iterate 1 to INT_MAX check all element in vector not divisible by i and if all element is not divisible by i then print i












    //print gcd
   //print vector

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
//  in vector all elemnet is not divisible find smallest number

   // int min=INT_MAX;

    // for(int i=0;i<v.size();i++){
    //     if(v[i]<min){
    //         min=v[i];
    //     }
    // }

    // print smallest number

  //  cout<<min<<endl;


  //  int b[n];
   


    


    return 0;
}