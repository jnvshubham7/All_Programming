#include<bits/stdc++.h>
using namespace std;
#define N 1000
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;

   int  flag=false;

    cin>>t;
    while(t--){
        int n;
        cin>>n;

        //create 3 loops to check if 3


        for(int i=1;i<=999;i++)
        {
            for(int j=i+1;j<=998;j++)
            {
                for(int k=j+1;k<=997;k++)
                {
                   

                    if((i+j+k)/3==n)
                    //print any of the 3 numbers
                    {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        flag=true;
                        break;
                    }
                    
                    // {
                    //     flag=true;
                        
                    //     cout<<i<<" "<<j<<" "<<k<<endl;
                    //     break;

                      
                    // }

                
                }
                if(flag==true)
                {
                    break;
                }

              
            }
            if(flag==true)
            {
                break;
            }

           
        }

       

        






        












//         int ans=n*3;
//        //print all possible combinations of 3 numbers from 1 to n which are equal to n*3


// int flag=0;

// int i,j,k;


//         for(int i=1;i<=1000;i++)
//         {
//             for(int j=i+1;j<=999;j++)
//             {
//                 for(int k=j+1;k<=998;k++)
//                 {
//                     //check all i,j,k are equal to n*3

//                     if(i+j+k==ans)
//                     {
//                         flag=1;

//                        // cout<<i<<" ";
//                     }

//                     // if(flag)
//                     //     cout<<k<<" ";
                    
//                    // ans--;
//                 }

//                 //  if(flag){
//                 //         cout<<j<<" ";
//                 //     }
//             }

//             //  if(flag){
//             //             cout<<k<<" ";
//             //         }
//         }
//        // cout<<ans<<endl;

//        //print all i,j,k
//     //    if(flag)
//     //    {
//     //        cout<<i<<" ";
//     //        cout<<j<<" ";
//     //        cout<<k<<endl;
//     //    }
//     //    else
//     //    {
//     //        cout<<-1<<endl;
//     //    }






        






    
    }

    return 0;
}