#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int n,k;
cin>>n>>k;

int a[n];
int b[n];


for(int i=1;i<=n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{
    cin>>b[i];
}

//vector<int> v;

//all bth index of a store in v

// for(int i=0;i<n;i++)
// {

//     for(int j=0;j<n;j++)
//     {
//         if(b[j]==i)
//         {
//             v.push_back(a[j]);
//         }
//     }


    
// }

//find max of a

int max_a=INT_MIN;
//int max_a=a[0];
for(int i=1;i<=n;i++)
{
    if(a[i]>max_a)
    {
        max_a=a[i];
    }

}






//cout<<max_a<<endl;

//check max_a is available in bth index of a
int flag=0;

//all index of max_a in a store in vector v
vector<int> v;

for(int i=1;i<=n;i++)
{
    if(a[i]==max_a)
    {
        v.push_back(i);
    }
}


//print v
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;


//check all b element with v

for(int i=0;i<v.size();i++)
{



    for(int j=0;j<n;j++)
    {
        if(b[j]==v[i])
        {
            flag=1;
          //  break;
        }
    }

}


if(flag==1)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}







// for(int i=0;i<n;i++)
// {

    // for(int j=0;j<n;j++)
    // {

    //     cout<<a[b[j]]<<" ";
    // //    if(a[b[j]]==max_a)
    // // {

    // //     //cout<<max_a<<endl;
    // //     flag=1;
    // //     break;
    // // } 


    // }

//}

// if(flag==1)
// {
//     cout<<"Yes"<<endl;

// }
// else
// {
//     cout<<"No"<<endl;
    
// }
   


    return 0;
}

















