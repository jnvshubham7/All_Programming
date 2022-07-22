#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

//push all elements in vector nums
vector<int> nums;
for(int i=0;i<n;i++){
    nums.push_back(a[i]);
}


//Longest Increasing Subsequence length 

// int lengthOfLIS(vector<int>& nums) {
        vector<int> sub;
        for (int x : nums) {
            if (sub.empty() || sub[sub.size() - 1] < x) {
                sub.push_back(x);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), x); // Find the index of the smallest number >= x
                *it = x; // Replace that number with x
            }
        }
     //   return sub.size();
     cout<<sub.size()<<endl;
 //   }








    return 0;
}