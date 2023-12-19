long long solution(vector<int> arr) {

//     The "absolute sum" of an array is defined as the absolute value or the modulus of the sum of its elements.
// For example, the array [4,-5,-6] has an absolute sum of 7 while the array [5,-4] has an absolute sum of 1.

// Let us define the "beauty" of an array as the minimum of the absolute sums of all its subarrays.
// A "subarray" is defined as a non-empty sequence of consecutive elements of the array.

// An array is "beautiful" if it has a beauty greater than zero.

// For example, the array [-4,5,7] is beautiful with a positive beauty of 1, as its non-empty subarrays [-4], [5], [7], [-4,5], [5,7], [-4,5,7]
// have absolute sums of 4, 5, 7, 1, 12 and 8 respectively.

// On the other hand, the array [-1,1,3] is not beautiful as it has a beauty of 0 because of its subarray [-1,1].

// Given an array "arr" of length n, your task is to find the number of its subarrays which are beautiful.

// Constraints:
// 1 ≤ n ≤ 2 × 105
// −109 ≤ arri ≤ 109

// Sample Input:

// arr = [-5,5,7]
// Sample Output:

// 4
// Explanation:

// The 4 subarrays [-5], [5], [7] and [5,7] are beautiful with a beauty of 5, 5, 7, 5 respectively.
// While the subarrays [-5,5] and [-5,5,7] have a beauty of 0 because of [-5,5] whose absolute sum is zero



int n=arr.size();
int dp[n][n];
for(int i=0;i<n;i++)
{
    dp[i][i]=abs(arr[i]);

    for(int j=i+1;j<n;j++)
    {
        dp[i][j]=abs(arr[i])+dp[i+1][j];
    }

    for(int j=i-1;j>=0;j--)
    {
        dp[i][j]=abs(arr[i])+dp[i][j+1];
    }

    for(int j=i+1;j<n;j++)
    {
        for(int k=i;k<j;k++)
        {
            dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]);
        }
    }

    for(int j=i-1;j>=0;j--)
    {
        for(int k=i;k<j;k++)
        {
            dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]);
        }
    }

    for(int j=i+1;j<n;j++)
    {
        for(int k=i;k<j;k++)
        {
            dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]);
        }
    }



}


int ans=0;
for(int i=0;i<n;i++)
{
    ans+=dp[i][i];

    for(int j=i+1;j<n;j++)
    {
        ans+=dp[i][j];
    }

    for(int j=i-1;j>=0;j--)
    {
        ans+=dp[i][j];
    }

    



}
