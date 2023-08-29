
#include<bits/stdc++.h>
using namespace std;
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
  




int indexOfFirstOne(int arr[], int low, int high)
{

  int res=-1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
 
        if(arr[mid]==1)
        {
            res=mid;
            high = mid - 1;
        }
        else if(arr[mid]==0)
        {
            low = mid + 1;  

        }
    
    }
 return res;
}
 
// function to find the index of first 1 in
// an infinite sorted array of 0's and 1's
int posOfFirstOne(int arr[])
{
    // find the upper and lower bounds between
    // which the first '1' would be present
    int l = 0, h = 1;
 
    // as the array is being considered infinite
    // therefore 'h' index will always exist in
    // the array
    while (arr[h] == 0) {
 
        // lower bound
        l = h;
 
        // upper bound
        h = 2 * h;
    }
 
    // required index of first '1'
    return indexOfFirstOne(arr, l, h);
}







int main(){
//Solution s;

    //binary array
  int arr[] = {0, 0, 1, 1, 1, 1} ;
  int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Index of first 1 in the array is " << posOfFirstOne(arr);


    return 0;
}