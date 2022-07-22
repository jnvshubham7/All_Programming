#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    ll min=INT_MAX;

    ll m;
    cin>>m;


    






    // string s;
    // cin>>s;

    vector<int> v;


    while(m!=0)
    {
       
        v.push_back(m%10);
         m=m/10;
    }

    reverse(v.begin(),v.end());

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

   ll  n=v.size();


    if(v.size()==2)
    {
        cout<<v[n-1]<<endl;
    }


else {
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}




//cout<<v.size()<<endl;



//     if(s.size()==2)
//     {

//         cout<<s[s.size()-1]<<endl;

//         // for(int i=0;)
//         // if()
//     }

//     else {

//         for(int i=0;i<s.size();i++)
//         {

//             v.push_back(s[i]);



//             //cout<<s[i]<<" "<<endl;
//             // if(s[i]<min)
//             // {
//             //    // min=s[i];
//             // }
//         }

//         sort(v.begin(),v.end());

//         cout<<v[0]<<endl;

//       //  cout<<min<<endl;
//     }


// }

}

    return 0;
}