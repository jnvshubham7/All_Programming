
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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>
    





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
    #define ppi pair<int,pair<int,int>>
    #define ppd pair<double,pair<int,int>>
    
    long long int minSum(int arr[], int n)
    {

        ll num1 = 0;
        ll num2 = 0;

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                num1 = (num1*10) +arr[i];
            }
            else
            {
                num2 =  (num2*10) +arr[i];
            }
        }

        cout<<num1<<" "<<num2<<endl;

       ll ans = num1 + num2;
        return ans;


    //    vector<int> v1;
    //   vector<int> v2;

    //     priority_queue<ll> pq1;

    //     for(int i=0;i<n;i++)
    //     {
            
    //         pq1.push(arr[i]);
    //     }

    //     while(!pq1.empty())
    //     {
    //         ll x = pq1.top();
    //         pq1.pop();

    //        ll y = pq1.top();
    //           pq1.pop();

    //         v1.push_back(x);
    //         v2.push_back(y);
          

            
    //     }

    //     reverse(all(v1));
    //     reverse(all(v2));

    //   //print the two vectors
    //     for(int i=0;i<v1.size();i++)
    //     {
    //         cout<<v1[i]<<" ";
    //     }
    //     cout<<endl;
    //     for(int i=0;i<v2.size();i++)
    //     {
    //         cout<<v2[i]<<" ";
    //     }
    //     cout<<endl;

    //     ll sum1=0;

    //     //create like 3 5 8 to  358
    //     for(int i=0;i<v1.size();i++)
    //     {
    //         sum1 = sum1*10 + v1[i];
    //     }
    //     ll sum2=0;
    //     for(int i=0;i<v2.size();i++)
    //     {
    //         sum2 = sum2*10 + v2[i];
    //     }
    //     cout<<sum1<<" "<<sum2<<endl;
    //     ll sum = sum1+sum2;
    //     cout<<sum<<endl;

    //     return sum;
              
        


    //     return 0;


        // Your code goes here
    }
};





int main(){
Solution s;


int arr[] = {6, 8, 4, 5, 2, 3};
int n = sizeof(arr)/sizeof(arr[0]);
s.minSum(arr,n);



    return 0;
}