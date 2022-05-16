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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //push all element in vector
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }

    int size=v.size();

    // You are given an array A=[A1,A2,…,AN], consisting of N integers. In one move, you can take two adjacent numbers Ai and Ai+1, delete them, and then insert the number Ai∧Ai+1 at the deleted position. 
    // Here, ∧ denotes bitwise AND. Note that after this operation, the length of the array decreases by one.


 int count =0;
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {

        int m=v[i]&v[j];
        //erase both element
        v.erase(v.begin()+i);
        v.erase(v.begin()+j-1);
        //insert the element
        v.insert(v.begin()+i,m);
        count++;

    }
}

//cout<<count<<endl;



        // if(v[i]&v[j])
        // {
        //     v.erase(v.begin()+i);
        //     v.erase(v.begin()+j-1);
        //     v.insert(v.begin()+i,v[i]&v[j]);
        //     size=v.size();
        //     break;
        // }
 //   }


    //take a[i] and a[i+1] delete both of them then put that place bitwise AND of a[i] and a[i+1]

//     int count=0;
// //while ALL elements are are equal

// int flag=0;

    //      for(int i=0;i<n-1;i++)
    // {
    //     //erase both of them and put the result in a[i]
    //     if(a[i]!=a[i+1] )
    //     {

    //         //delete both of them from array


      
    //     a[i]=a[i]&a[i+1];
    //     count++;
    //     }
    //     else {
    //         continue;
    //     }

       

    // }


// if(n%2==0){
//     flag=1;
//         for(int i=0;i<n-1;i++)
//     {
//         //erase both of them and put the result in a[i]
//         if(a[i]!=a[i+1] )
//         {
      
//         a[i]=a[i]&a[i+1];
//         count++;
//         }
//         else {
//             continue;
//         }

       

//     }

// }


// else {

//         for(int i=0;i<n-1;i++)
//     {
//         //erase both of them and put the result in a[i]
//         if(a[i]!=a[i+1] )
//         {
      
//         a[i]=a[i]&a[i+1];
//         count++;
//         }
//         else {
//             continue;
//         }

       


//     }

//     count -=1;
// }


cout<<count<<endl;

// if(flag==1)
// {
    
// }
// else {
//     cout<<count-1<<endl;
// }
   


}

    return 0;
}