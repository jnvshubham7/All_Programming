// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1#

class Solution{
  public:
 


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

int findFloor(long long int arr[], int N, long long int x) {

	ll start=0, end=N-1;
	ll ans=-1;
	while(start<=end) {
		
		ll mid = start+(end-start)/2;
		if(arr[mid]==x) {
		return mid;
		}
		else if(arr[mid]<x) {
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]>x) {
			end=mid-1;
		}


	}

	return ans;
    
    //Your code here
}

};
