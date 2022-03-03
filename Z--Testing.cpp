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

   //find the maximum element in the array
  int max=a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
  }
  //find the minimum element in the array

  int min=a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]<min)
    {
      min=a[i];
    }
  }
  //find the maximum difference between the maximum and minimum element
  int diff=max-min;
  for(int i=0;i<n;i++)
  {
    if(a[i]>min && a[i]<max)
    {
      if(a[i]-min>diff)
      {
        diff=a[i]-min;
      }
    }
  }
  cout<<diff<<endl;
  
  


}

  return 0;
}