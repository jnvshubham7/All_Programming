// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return length
// of the resultant number
int numLen(int k)
{
 int ans=1;
        int num=0;
        while(ans<100000){
            num=num*10+1;
            if(num>=k) num=num%k;
            if(num==0) return ans;
            ans++;
        }
        return -1;
        
}

// Driver code
int main()
{

	int K = 23;
	cout << numLen(K);

	return 0;
}
