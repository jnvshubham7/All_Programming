#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int len =INT_MIN;

    int cnt=1;


    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            cnt++;
        }
        else
        {
            len=max(len,cnt);
            cnt=1;
        }


    }

    cout<<len<<endl;


    return 0;
}