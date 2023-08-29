//https://leetcode.com/discuss/interview-question/2232162/Trilogy-Innovations-(Codenation)-or-OA-or-Minimum-Time-Required-To-Capture-The-Kingdom
#include<bits/stdc++.h>
using namespace std;

int main(){

// int arr[]={1,1,1,5,9,8};
// int arr[]={9,9};
// int arr[]={4,3,1};
int n=sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);

int x=1;
int day=0;
int cnt=1;

for(int i=0;i<n;i++)
{
    if(arr[i]<=x)
    {
        x=0;
        cnt++;


    }
    else {
        int temp=ceil((float)arr[i]/cnt);
        //x=x+temp*cnt;
         x=0;
        day+=temp;
        cnt++;

    }

}

cout<<day<<endl;

    return 0;
}