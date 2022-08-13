//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    bool isKPartitionPossible(int a[], int n, int k)
    {

        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        if(sum%k!=0)
            return false;
        int target=sum/k;
        return solve(a,n,k,target,0,0);

       
    }

    bool solve(int a[], int n, int k, int target, int currSum, int currCount)
    {
        if(currCount==k)
            return true;
        if(currSum==target)
            return solve(a,n,k,target,0,currCount+1);
        for(int i=0;i<n;i++)
        {
            if(a[i]>target)
                continue;
            if(solve(a,n,k,target,currSum+a[i],currCount+1))
                return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends