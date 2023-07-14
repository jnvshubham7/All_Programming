#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

int main(){
ll t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    int a[n];
    fr(i,n)
    {
        cin>>a[i];
    }


    int sum = 0;
    fr(i,n)
    {
        sum+=a[i];
    }

    int c1=0,c2=0,c3=0;


            for(int i=0;i<n;i++){


                
            if(a[i]==-1&&a[i+1]==-1) c1=c1+1;
            else if (a[i]==1 && a[i+1]==-1) c2=c2+1;
            else if (a[i]==-1 && a[i+1]==1) c2=c2+1;
            else if (a[i]==1 && a[i+1]==1) c3=c3+1;
        }
        
        if (c1) cout<<sum+4<<endl;
        else if (c2) cout<<sum<<endl;
        else if (c3) cout<<sum-4<<endl;



















//     int f1=0,f2=0,f3=0,f4=0;

//     for(int i=1;i<n;i++)
//     {
//         if(a[i-1]==-1 && a[i]==-1)
//         {
//             a[i-1]=1;
//             a[i]=1;
//             f1=1;

//         }
        
//     }

//    if(f1==0)
//    {
//        for(int i=1;i<n;i++)
//        {
//            if(a[i-1]==-1 && a[i]==1)
//            {
//                a[i-1]=1;
//                a[i]=-1;
//                f2=1;
//            }
         
//        }
//    }

//     if(f2==0 && f1==0)
//     {
//          for(int i=1;i<n;i++)
//          {
//               if(a[i-1]==1 && a[i]==-1)
//               {
//                 a[i-1]=-1;
//                 a[i]=1;
//                 f3=1;
//               }
            
//          }
//     }

//     if(f3==0 && f2==0 && f1==0)
//     {
//         for(int i=1;i<n;i++)
//         {
//             if(a[i-1]==1 && a[i]==1)
//             {
//                 a[i-1]=-1;
//                 a[i]=-1;
//                 f4=1;
//             }
            
//         }
//     }


//     //proint sum
//     int sum=0;
//     fr(i,n)
//     {
//         sum+=a[i];
//     }

//     cout<<sum<<endl;



}

    return 0;
}