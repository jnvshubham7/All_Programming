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

int m,n;
cin>>m>>n;



vector<string> v;

//convert all numbers in binary and store in vector bw m and n

for(int i=m+1;i<n;i++)
{
    string s="";
    int num=i;
    while(num>0)
    {
        s+=to_string(num%2);
        num/=2;
    }

    reverse(all(s));
    v.pb(s);
}

int odd=0;
int even=0;

//print vector
for(auto x:v)
{
    cout<<x<<" ";
}

bool odd_0 = false, odd_1 = false, even_0 = false, even_1 = false;


// vector<bool> v1;

//check contigous 1's in binary number or 0's in binary number 





// for(auto x:v)
// {
//     int count=0;
//     int count1=0;
//     for(int i=0;i<x.size();i++)
//     {
//         if(x[i]=='1')
//         {
//             count++;
//         }
//         else
//         {
//             count=0;
//         }

//         if(x[i]=='0')
//         {
//             count1++;
//         }
//         else
//         {
//             count1=0;
//         }

//         if(count%2==0)
//         {
//             v1.pb(true);
//         }
//         else
//         {
//             v1.pb(false);
//         }



        

//     //     if(count==2)
//     //     {
//     //         v1.pb(true);
//     //         break;
//     //     }
//     // }

//     // if(count<2)
//     // {
//     //     v1.pb(false);
//     // }
// }

//

cout<<endl;









    return 0;
}