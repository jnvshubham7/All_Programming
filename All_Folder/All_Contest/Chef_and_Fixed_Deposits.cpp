#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	
	while(a--){
	    
	    int n=0,x=0;
	    bool flag=false;
	    cin>>n>>x;
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n,greater<int>());
	    
	    int sum=0;
	    int j=0;
      int count=0;
	    
	    for(j;j<n;j++){
	        sum+=arr[j];
           count++;
	        if(sum>=x){
	            flag=true;
	            break;
             
	        }
	    }
	    if(flag){
	        cout<<count<<endl;
	    }
	    else cout<<"-1"<<endl;
	    
	}
	return 0;
	
}
	    