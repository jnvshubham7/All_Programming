#include<bits/stdc++.h>
using namespace std;


#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){

    int t;

    cin>>t;

    while(t--){

      int n,x;
      
      cin>>n>>x;

      string s;

        cin>>s;
        // cout<<s<<endl;

         // cout<<s.find("a")<<endl;

         //count how many 0 and 1 in the string
            int count0=0,count1=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                {
                    count0++;
                }
                else
                {
                    count1++;
                }
            }

            cout<<((count0+1)/x)<<endl;



      //create a vector and store all 0 and 1 in it
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back(0);
        // }
        // //print vector
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i];
        // }
        // cout<<endl;

      //take n digits of number and store in a vector
        // vector<int> v;

        // for(long long int i=0;i<n;i++)
        // {
        //   long long int temp;
        //     cin>>temp;
        //     v.push_back(temp);
        // }

        // //coot<<vector
        // for(int i=0;i<v.size();i++)
        // {
        //     cout<<v[i]<<" ";
        // }

      //take input n number of binary digits


        // int arr[n];

        // for(int i=0;i<n;i++)
        // {
        //     cin>>arr[i];
        // }
        // //cout array 
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i];
        // }
        // cout<<endl;



        // int arr[n];

        // for(int i=0;i<n;i++)
        // {
        //     cin>>arr[i];
        // }


    }

    return 0;
}