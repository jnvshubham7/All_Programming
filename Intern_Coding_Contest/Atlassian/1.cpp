// Count Between

// Given an array of integers and a series of ranges, determine the number of array elements in the ranges. The ranges are inclusive.

// Example

// arr = [1, 2, 2, 3, 4]

// low = [0,2]

// high = [2,4]

// Queries are aligned by index.

// 0.low = 0, high = 2: There are 3 elements in the range: [1, 2, 2]

// 1. low=2, high = 4: There are 4 elements in the range: [2, 2, 3, 4]

// Return the array of answers, aligned by index with their queries: [3, 4].

// Constraints

// • 1sns105

// • 1 s arr[i]s 10⁹

// •1sqs105



// https://www.tutorialcup.com/interview/array/queries-for-counts-of-array-elements-with-values-in-given-range.htm


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
int countInRange(vector<int> arr,int sz,int low,int high)
  {
      int count=0;
      for(int i=0;i<sz;i++)
      {
          if(arr[i]>=low && arr[i]<=high)
          {
              count++;
          }
      }
      return count;
  }


vector<int> countBetween(vector<int> arr, vector<int> low, vector<int> high)
{
    
    vector<int> result;
    int n = low.size();
    int m = high.size();
    int sz = arr.size();


    if(n!=m)
    {
        return result;
    }
    else if(n==1 && m==1)
    {
        result.push_back(countInRange(arr,sz,low[0],high[0]));
        sort(result.begin(),result.end());
        return result;
    }
   

  else  { int low1=low[0];
    int high1=high[0];

    int low2=low[1];
    int high2=high[1];

    int count1  = countInRange(arr,sz,low1,low2);
    int count2 = countInRange(arr,sz,high1,high2);

    result.push_back(count1);
    result.push_back(count2);
    
    }
    sort(result.begin(),result.end());
    return result;

}


};







int main(){
Solution s;


// vector<int> arr = {1,2,2,3,4};
// vector<int> low = {0,2};
// vector<int> high = {2,4};

vector<int> arr = {1,3,5,6,8};
vector<int> low = {2};
vector<int> high = {6};


 vector<int> result = s.countBetween(arr,low,high);
    fr(i,result.size())
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;




    return 0;
}