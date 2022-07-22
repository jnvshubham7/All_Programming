#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int n,int k){
    
    int pivot=n-1;
    while(k!=pivot+1){
        int i=-1;
        int j=0;
    
    if(a[j]<a[pivot]){
        i++;
         int temp1=a[i];
    a[i]=a[j];
    a[j]= temp1;
        j++;
        
    }
    else if(a[j]>=a[pivot]){
        j++;
         int temp2=a[i+1];
    a[i+1]=a[j];
    a[j]= temp2;
        pivot=i+1;
    }
    
    }
    return a[pivot];
}
int main(){
   int a[]={3,6,8,1,5};
   cout<<partition(a,5,4);
    
}