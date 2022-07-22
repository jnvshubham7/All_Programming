#include<bits/stdc++.h>
using namespace std;
#define ll long long


/*
    Time Complexity: O(2^N)
    Space Complexity: O(2^N)

    where 'N' is the number of staris in the staircase.
*/

int inf = 1e9;
int rec(int i, vector<int> &heights){

    if (i == heights.size() - 1){
        // Reached the last stair.
        return 0;
    }

    // Two available choices.
    int oneJump = inf;
    int twoJump = inf;

    if (i + 1 < heights.size()){
        oneJump = abs(heights[i] - heights[i + 1]) + rec(i + 1, heights);
    }

    if (i + 2 < heights.size()){
        twoJump = abs(heights[i] - heights[i + 2]) + rec(i + 2, heights);
    }

    int ans = min(oneJump, twoJump);
    return ans;
}

int frogJump(int n, vector<int> &heights)
{
    int ans = rec(0, heights);
    return ans;
}

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> heights(arr, arr+n);
    int ans = frogJump(n, heights);
    cout<<ans<<endl;
    
 



    //iterate through the array and check which arr[i+1]-arr[i] is minimum then go to that element then again check 
    //which arr[i+1]-arr[i] is minimum and so on
    // for(int i = 0; i<n; i++){
    //     if(arr[i+1]-arr[i] < 0){
            
    //         i = i+arr[i+1]-arr[i];
    //     }
    // }











    


}

    return 0;
}