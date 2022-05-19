class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{


    // Complete the function
	    int ans=0;
	    unordered_map<int,int> mp;
	    long long sum=0;
	    mp[0]=-1;
	    for(int i=0;i<n;i++){
	        sum=(sum+arr[i])%k;
	        if(sum<0) 
	            sum=(sum+k)%k;
	        if(mp.find(sum) != mp.end())     {
	            ans=max(i-mp[sum], ans);
	        }else{
	            mp[sum]=i;
	        }
	    }
	    return ans;














//         int sum=0;
//         int count=0;

//         for(int i=0;i<n;i++)
//         {
//             sum+=arr[i];
           
//         }

//         //reverse array
        
//     //reverse whole array
//     int temp;
//     for(int i=0;i<n/2;i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }


//     if(sum%k==0)
//     {
//        return n;
//     }


//     for(int i=0;i<n;i++)
//     {

//         sum=sum-arr[i];
//          count++;
//         if(sum%k==0)
// break;

//     }

//     return (n-count);



    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
	    // Complete the function
	}
};
